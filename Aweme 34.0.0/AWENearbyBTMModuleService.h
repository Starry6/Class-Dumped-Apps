@interface AWENearbyBTMModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)areaBtmStringWith:tabId:;
- (id)btmCdStringWithAreaType:itemType:subTabId:index:;
- (id)btmPageStringWithPageType:cdStringWithAreaType:itemType:subTabId:;
- (id)btmCdStringWithAreaType:itemType:;
- (id)btmCdStringWithAreaType:itemType:index:;
- (id)btmPageStringWithPageType:;
@end
