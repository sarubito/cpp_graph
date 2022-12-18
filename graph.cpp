#include <iostream>
#include <vector>
#include <utility>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_utility.hpp>

//グラフの定義 インスタンス生成
typedef boost::adjacency_list<boost::listS, boost::vecS, boost::undirectedS> Graph;

const std::string name = "ABCDE";

enum{
    A,
    B,
    C,
    D,
    E
};

int main()
{
    Graph g;

    std::map<int, Graph::vertex_descriptor> desc;
    for(int i=0;i<E;++i){
        desc[i] = boost::add_vertex(g);
    }

    boost::add_edge(desc[A], desc[B], g);
    boost::add_edge(desc[A], desc[C], g);
    boost::add_edge(desc[C], desc[D], g);
    boost::add_edge(desc[D], desc[E], g);

    boost::print_graph(g, name.c_str());

}