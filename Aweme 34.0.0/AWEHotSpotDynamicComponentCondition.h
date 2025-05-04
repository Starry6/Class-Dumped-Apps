@interface AWEHotSpotDynamicComponentCondition : NSObject
@property (nonatomic) NSString left;
@property (nonatomic) @ right;
@property (nonatomic) q operatorType;
- (BOOL)isMatch;
- (long long)operatorInCondition:;
- (id)leftOperandInCondition:;
- (id)rightOperandInCondition:;
- (long long)operatorType;
- (id)initWithCondition:;
- (void).cxx_destruct;
- (id)right;
- (id)left;
- (void)setOperatorType:;
- (void)setLeft:;
- (void)setRight:;
@end
