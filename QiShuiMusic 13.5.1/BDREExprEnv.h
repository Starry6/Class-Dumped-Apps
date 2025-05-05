@interface BDREExprEnv : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)envValueOfKey:;
- (void)resetCost;
- (double)cost;
@end
