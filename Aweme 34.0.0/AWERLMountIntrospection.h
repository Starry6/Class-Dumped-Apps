@interface AWERLMountIntrospection : NSObject
@property (nonatomic) double findViewCost;
@property (nonatomic) double updateAttributeCost;
@property (nonatomic) double updateSetFrameCost;
- (double)findViewCost;
- (void)setFindViewCost:;
- (double)updateAttributeCost;
- (void)setUpdateAttributeCost:;
- (double)updateSetFrameCost;
- (void)setUpdateSetFrameCost:;
- (id)init;
@end
