# design-pattern-adapter
# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Adapter 轉接器模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
Adapter模式的目的是讓原本不相容的類別可以一起工作。<br>
它將一個類別的介面轉換為另一個介面，讓原本無法相容的類別可以協同運作。

---
<br>

## 使用時機
Adapter模式常常被使用在以下的情境：
- 當一個類別的介面與另一個類別的介面不相容時，可以使用Adapter模式來轉換介面。
- 當需要重複使用一個現有的類別，但介面與應用程式的其他部分不相容時，可以使用Adapter模式來轉換介面。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1mCelcRfe8SdD1-eaxEdGygphti_787uy)
> 圖片來源：[Refactoring.Guru - Proxy](https://refactoring.guru/design-patterns/adapter)

---
<br>

## 實作成員
* Target
  * 定義與應用程式執行所需之特定介面。
* Adapter
  * 實作Target介面，同時也保有另一個類別的實例以提供應用程式所需之功能。
* Adaptee
  * 擁有原始功能，但其介面與應用程式所需之介面不相容。
* Client
  * 透過Target介面與Adapter互動，使得Adaptee能夠被應用程式使用。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Adapter Patternn](https://en.wikipedia.org/wiki/Adapter_pattern) <br>
* [Refactoring.Guru - Adapter](https://refactoring.guru/design-patterns/adapter) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
