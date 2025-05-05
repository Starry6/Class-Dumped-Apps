@interface BDXSecureSCCHandlerIMP : NSObject
@property (nonatomic) BDXSecureSCCConfig sccConfig;
@property (nonatomic) BDXCommonErrorView errorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_createErrorView:forReason:withWebView:forURL:canGoBack:;
- (BOOL)bdw_URLRiskLevel:forReason:withBlockStyle:withWebView:forURL:canGoBack:;
- (BOOL)bdw_willSkipSCCCloudCheck:forURL:;
- (id)fetchAllowAndDenyList;
- (id)sccConfig;
- (void)setSccConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)errorView;
- (void)setErrorView:;
@end
