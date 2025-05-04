@interface AWEGDContainerPreReqProvider : NSObject
@property (nonatomic) NSArray schemeUrls;
@property (nonatomic) AWEPOIDetailPreRequestManager preRequestManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUrlSchemes:;
- (void)setSchemeUrls:;
- (id)preRequestManager;
- (id)schemeUrls;
- (void)setPreRequestManager:;
- (void)mergeWithResponseDictionary:;
- (void)ditoExtension:didReceiveSizeChangeWithViewTag:;
- (void)gdContainerWillRefresh;
- (void)updatePreRequestPageModel:;
- (void)createPreReqManagerWithContext:viewController:baseRouterParams:;
- (void)clear;
- (void).cxx_destruct;
@end
