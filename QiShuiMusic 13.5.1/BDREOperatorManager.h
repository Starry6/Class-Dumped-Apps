@interface BDREOperatorManager : NSObject
@property (nonatomic) NSDictionary operators;
- (id)getOperatorFromSymbol:;
- (id)init;
- (void).cxx_destruct;
- (void)registerOperator:;
- (id)operators;
- (void)setOperators:;
+ (id)sharedManager;
@end
