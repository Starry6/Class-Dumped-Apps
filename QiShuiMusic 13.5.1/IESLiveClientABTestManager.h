@interface IESLiveClientABTestManager : NSObject
@property (nonatomic) NSMapTable experimentMemo;
- (id)experimentMemo;
- (void)registerExperimentInitWithKey:owner:description:defaultValue:valueType:isSticky:;
- (void)setExperimentMemo:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
