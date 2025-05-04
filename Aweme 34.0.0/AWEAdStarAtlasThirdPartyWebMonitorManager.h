@interface AWEAdStarAtlasThirdPartyWebMonitorManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)handleWithErrorInfo:;
+ (id)linkExtra;
+ (void)startUpdatingWebViewMonitorScript;
+ (void)executeMonitorScriptWithWebView:starLinkID:creativeID:;
+ (id)requestURL;
@end
