@interface AWEEnterpriseWebViewFeature : AWEFeature
@property (nonatomic) BOOL businessBlocked;
@property (nonatomic) NSMutableSet innerBusinessSafeURLs;
@property (nonatomic) NSString requestURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)innerBusinessSafeURLs;
- (void)setInnerBusinessSafeURLs:;
- (void)setBusinessBlocked:;
- (void)checkDownloadUrl:webUrl:;
- (BOOL)businessBlockMode;
- (BOOL)businessBlocked;
- (id)businessSafeURLs;
- (void)verifyRequestURL:completion:;
- (id)requestURL;
- (id)initWithContext:;
- (void)setRequestURL:;
- (void).cxx_destruct;
+ (id)aliasName;
@end
