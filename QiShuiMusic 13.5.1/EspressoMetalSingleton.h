@interface EspressoMetalSingleton : NSObject
@property (nonatomic) NSInteger is_memory_tight;
- (int)is_memory_tight;
- (void)setIs_memory_tight:;
+ (id)shared;
@end
