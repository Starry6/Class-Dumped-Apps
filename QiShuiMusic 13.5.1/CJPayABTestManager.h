@interface CJPayABTestManager : NSObject
@property (nonatomic) NSMutableArray libraKeyArray;
- (id)getABTestValWithKey:;
- (id)getABTestValWithKey:exposure:;
- (id)getExperimentKeyValueDic;
- (id)libraKeyArray;
- (void)setLibraKeyArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
