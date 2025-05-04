@interface AWESearchLynxElementManager : NSObject
- (id)bdxlynxElementWithRegisterName:elementClass:;
- (id)searchBDXLynxElements;
- (id)searchDynamicLynxElements;
- (void)searchRegisterElement;
- (BOOL)enablesSearchAwemePaasLynxLive;
- (id)searchDynamicLynxElementWithRegisterName:elementClass:;
+ (id)shareInstance;
@end
