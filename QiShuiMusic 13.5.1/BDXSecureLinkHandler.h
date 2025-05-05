@interface BDXSecureLinkHandler : NSObject
@property (nonatomic) BDXSecureSecLinkConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldInterceptFirstJump:withResponse:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
+ (void)enableSeckLinkWithConfig:webView:;
@end
