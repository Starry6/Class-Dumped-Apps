@interface CKXStructProxyChildCache : NSObject
@property (nonatomic) CKXStructProxyBase proxy;
- (id)proxy;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (id)initWithProxy:;
- (id)structProxyForStructReference:mutable:;
- (id)structListProxyForListReference:mutable:;
@end
