---
title: 使用EagleGet快速下载bilibili上的港澳台专属番剧
categories: 主站
date: 2019-10-24 22:30:03
tags: 实用教程
---

 

# 使用EagleGet快速下载bilibili上的港澳台专属番剧

众所周知，B站上有很多“港澳台专属”的番剧，比如
[![TIM20190827165832e1d0071ff60df52b.md.png](https://www.kanjiantu.com/images/2019/08/27/TIM20190827165832e1d0071ff60df52b.md.png)](https://www.kanjiantu.com/image/dvEQ38)

但是，这些福利满满~~无圣光~~的番剧因为众所周知的原因在大陆是无法观看的，而如果用梯子的话，你也会面临消耗过多流量以及网速慢的问题，而且**B站的服务器位于国内**，单纯为了伪装IP而浪费宝贵的代理流量并不合算。如何解决这个问题呢？

我们可以使用**视频抓取**，这个方法的原理是因为B站的服务器位于国内，因此我们可以先开梯子打开页面，等bilibili加载出视频后抓取视频，然后再关掉梯子下载，这样就既可以用直连的高网速下载，又不用浪费代理流量了！

---

## 软件：
- EagleGet： 提供快速下载功能（单源下载神器，这个软件用来下载一些冷门链接非常快，而且是免费的，比某雷要强得多）
- 任何一个有香港代理的梯子（这里推荐[Windscribe](http://www.tuopushe.com/windscribe-emergency-connect.html)）
- Chrome或Chromium浏览器（用于支持EagleGet插件）

### 准备EagleGet：

在浏览器的地址栏中输入[**http://www.eagleget.com**](http://www.eagleget.com),或点击链接直接访问，效果如图：![TIM截图20190827175353.png](https://i.loli.net/2019/08/27/w6kXe5qUVYNAJnF.png)

将鼠标悬浮在右上角的“**DOWNLOAD**”上会看到下拉菜单中有如下选项![TIM截图20190827175922.png](https://i.loli.net/2019/08/27/5OVQywa81G39i7k.png)

#### 准备EagleGet主体

单击**EAGLEGET PORTABLE**进入如下页面![vSZmE9D7JupKfId100b68d998c81157.png](https://www.kanjiantu.com/images/2019/08/27/vSZmE9D7JupKfId100b68d998c81157.png)

单击“**DOWNLOAD EAGLEGET STABLE**”下载EagleGet软件主体。如果你觉得官网的速度太慢了的话，也可以用我的网盘链接：[链接](https://pan.baidu.com/s/1qI9GXed4f9KgPsOFgV88bA)

#### 准备EagleGet插件
单击**CHROME EXTENSION**进入Chrome网上应用店（这步需要在Chrome和Chromium中进行）（这步可能需要开梯子...）
![TIM2019082718214427781b5c1da322c5.png](https://www.kanjiantu.com/images/2019/08/27/TIM2019082718214427781b5c1da322c5.png)
单击**安装至Chrome**安装此扩展。

### 准备梯子：
[**看这篇教程**](http://www.tuopushe.com/windscribe-emergency-connect.html)

### 准备浏览器：
Chromium压缩包：[链接](https://pan.baidu.com/s/1EaXvLsGBxvMZ_b8MpL_S3w)

---

## 实际操作：
打开梯子，在B站找一部“仅限港澳台地区”的番剧，进入页面（这里以炎炎消防队第一集为例（这个视频8分15秒有一个圣光镜头...））
![TIM20190827183306461eec262226801c.png](https://www.kanjiantu.com/images/2019/08/27/TIM20190827183306461eec262226801c.png)

**重头戏来了！**

**同时按"control"键，"shift"键和"I"键启动开发者工具**

![TIM20190828115949ec136e4de023de21.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828115949ec136e4de023de21.png)

点击右上角的"Network"进入网络请求界面

![TIM20190828120031adb629afaed9eb6f.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828120031adb629afaed9eb6f.png)

接下来**刷新页面**以加载网络请求，刷新之后，这个界面就变成了这样：

![TIM2019082812321767479674bb7169b1.png](https://www.kanjiantu.com/images/2019/08/28/TIM2019082812321767479674bb7169b1.png)

耐心等待，直到视频加载完成（毕竟用了梯子以后网速会变慢很多）

![TIM20190828123246b58d08b727e9dd85.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828123246b58d08b727e9dd85.png)

等到视频加载完成后，在左上角的"Filter"栏中输入"flv"（B站的视频资源是以flv格式存储的）过滤视频文件

![TIM20190828123408712a2c643defc935.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828123408712a2c643defc935.png)

过滤后，在底部的请求栏中找到一个类型为"video/x-flv"的请求，单击它查看它的详细信息

![TIM20190828123438f99b61e46c8d7503.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828123438f99b61e46c8d7503.png)

复制"Request URL"链接，这时候如果你的EagleGet插件工作正常的话已经弹出下载任务界面了。如果并没有弹出，那么打开EagleGet主界面

![TIM截图20190828123623.png](https://i.loli.net/2019/08/28/NW3DfnM6YCQO7gx.png)

单击左上角的“✚”进入添加任务的界面，在上面的链接栏中粘贴刚才复制的链接

![TIM截图20190828123549.png](https://i.loli.net/2019/08/28/exH2VLNv4AzRG8D.png)

**EagleGet高速的秘密**

单击左边的“连接”，进入连接设置，将“该任务的最大线程数”设为32（默认是8），如图

![TIM截图20190828123603.png](https://i.loli.net/2019/08/28/aA3H9IqBGcbvudX.png)

开始下载，设置最大线程数以后，下载速度可以加速到5~6MBs(够快的)，很快就可以下载完成（再一次证明了B站的服务器位于国内）。

下载完成后，使用格式转换软件将下载的flv视频转化为MP4格式即可（这里用的是[格式工厂](http://www.pcfreetime.com)）
![TIM截图20190828133356.png](https://i.loli.net/2019/08/28/xPfqwTkQ9YH8t2S.png)

---

## 效果：

放两张图让大家对比一下（炎炎消防队第一集 08:15）：

圣光版：

![TIM20190828134126f904401b17741dac.png](https://www.kanjiantu.com/images/2019/08/28/TIM20190828134126f904401b17741dac.png)

无圣光版：

![TIM201908281342024ffdd3fa7b674471.png](https://www.kanjiantu.com/images/2019/08/28/TIM201908281342024ffdd3fa7b674471.png)

---

**如果你觉得这篇教程很好的话，请将其分享出去！**

ps：二次元图片建议使用[看见图床](https://www.kanjiantu.com)分享，无须担心删图，封号问题