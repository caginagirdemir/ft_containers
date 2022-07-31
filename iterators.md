# C++ Iterators

Iterators are, just like pointer but more advanced, used to access the container elements.

Important Points: 
- Iterators are used to traverse(çapraz kullanılabilir) from one element to another element, a process is known as iterating through the container.
- The main advantage of an iterator is to provide a common interface for all the containers type.
- Iterators make the algorithm independetn of the type of the container used.
- Iterators provide a generic approach to navigate through the elements of a container.

Syntax
<ContainerType>::iterator;
<ContainerType>::const_iterator;

<details>
<summary> Introduction to Iterators in C++ </summary>

| English | Türkçe |
| --- | --- |
|- An iterator is an object (like a pointer) that points to an element inside the container. |- Bir iterator container içindeki bir elemenatı işaret eden bir nesnedir (bir pointer gibi). |
|- We can use iterators to move through the contents of the container. |- Container içeriği boyunca itertorler ile hareket edebiliriz. |
|- Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers. |- Iteratörler container içinde saklanmış olan data manipülasyonuyla containerlar ve algoritmalar arasındaki bağlantıda önemli rol oynar. |
|-The most obvious from of an iterator is a pointer. | -Iteratorün bir işaretçi olduğu en belirgindir.|
|A pointer can point to elements in an array and can iterate through them using the increment operator (++) |

</details>
