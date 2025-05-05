@interface HTSServiceContainer : NSObject
- (id)__getShareInstanceProtocolName:;
- (void)bindBlock:toProtocol:withScope:;
- (int)__getScopeTypeWithProtocolName:;
- (void)bindClass:toProtocol:withScope:;
- (id)__firstFoundCacheWithProtocolName:;
- (id)__getMultipleInstanceProtocolName:;
- (id)__getProtocolServiceWithProtocolName:;
- (id)__getWeakShareInstanceProtocolName:;
- (id)__secondGetAndcheckCacheWithProtocolName:;
- (id)getProtocolService:;
- (id)initWithParentContainer:;
- (id)init;
- (void).cxx_destruct;
@end
