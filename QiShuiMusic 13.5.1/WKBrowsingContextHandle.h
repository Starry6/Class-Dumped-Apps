@interface WKBrowsingContextHandle : NSObject
@property (nonatomic) {ObjectIdentifier<WebKit::WebPageProxyIdentifierType>=Q} pageProxyID;
@property (nonatomic) Q webPageID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithPageProxy:;
- (id)_initWithPage:;
- (id)_initWithPageProxyID:andWebPageID:;
- (id)_pageProxyID;
- (unsigned long long)_webPageID;
+ (BOOL)supportsSecureCoding;
@end
