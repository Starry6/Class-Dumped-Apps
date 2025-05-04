@interface AWEFeedPreRenderSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onWillRunCompletion:input:output:;
- (double)delayPreRenderOffset;
- (id)feedSmartPreRenderConfig;
+ (id)abTestConfig;
@end
