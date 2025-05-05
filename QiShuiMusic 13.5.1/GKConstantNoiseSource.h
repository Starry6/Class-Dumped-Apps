@interface GKConstantNoiseSource : GKNoiseSource
@property (nonatomic) double value;
- (id)init;
- (void)setValue:;
- (double)value;
- (id)initWithValue:;
- (double)valueAt:;
- (id)cloneModule;
+ (id)constantNoiseWithValue:;
@end
