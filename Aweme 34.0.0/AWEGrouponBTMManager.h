@interface AWEGrouponBTMManager : NSObject
+ (id)areaBtmStringWith:tabId:;
+ (id)itemBtmStringWith:;
+ (id)btmCdStringWithAreaType:itemType:subTabId:index:;
+ (id)itemBtmStringWith:index:;
+ (id)btmFeedCStringWithGrouponSubTabId:;
+ (id)btmToolMorePanelItemCStringWithIndex:;
+ (id)btmPageStringWithPageType:cdStringWithAreaType:itemType:subTabId:;
+ (id)btmCdStringWithAreaType:itemType:;
+ (id)btmCdStringWithAreaType:itemType:index:;
+ (id)btmPageStringWithPageType:;
+ (id)btmPageABStringWithPageType:;
@end
