@interface AWEFeedLoadmoreSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)runWithConfigBuilder:completion:;
- (void)onWillRunCompletion:input:output:;
- (BOOL)injectTruthForData:withInput:ext:;
+ (id)abTestConfig;
@end
