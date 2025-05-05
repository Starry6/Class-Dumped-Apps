@interface IESLivePerformanceCondition : NSObject
@property (nonatomic) NSInteger factor;
@property (nonatomic) NSInteger operator;
@property (nonatomic) float value;
- (int)operator;
- (void)setOperator:;
- (void)setFactor:;
- (void)setValue:;
- (float)value;
- (int)factor;
+ (id)transformFromDictionary:;
@end
