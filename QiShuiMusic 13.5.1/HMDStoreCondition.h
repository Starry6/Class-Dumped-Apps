@interface HMDStoreCondition : NSObject
@property (nonatomic) q judgeType;
@property (nonatomic) NSString key;
@property (nonatomic) double threshold;
@property (nonatomic) NSString stringValue;
- (long long)judgeType;
- (void)setJudgeType:;
- (double)threshold;
- (id)init;
- (id)key;
- (void)setStringValue:;
- (void)setKey:;
- (id)stringValue;
- (void).cxx_destruct;
- (void)setThreshold:;
@end
