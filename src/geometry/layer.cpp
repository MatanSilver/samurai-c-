#include <list>
#include "linesegment.hpp"
#include "layer.hpp"

namespace samurai {
  layer::layer(std::list<std::shared_ptr<layersegment>> linelist) {
    loops = linelist_to_loops(linelist);
  }
  std::list<std::list<std::shared_ptr<layersegment>>> layer::get_loops() {
    return loops;
  }
  std::list<std::list<std::shared_ptr<layersegment>>> layer::linelist_to_loops(std::list<std::shared_ptr<layersegment>>) {
    
  }
}