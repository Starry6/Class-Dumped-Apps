@interface AWEHotSearchPreloadSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)runWithConfigBuilder:completion:;
- (void)onDidRunCompletion:input:output:;
- (BOOL)injectTruthForData:withInput:ext:;
+ (id)abTestConfig;
@end
