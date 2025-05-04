@interface AWERLAnimation : NSObject
@property (nonatomic) double delay;
@property (nonatomic) Q options;
@property (nonatomic) double during;
- (double)during;
- (void)setDuring:;
- (id)init;
- (void)setDelay:;
- (void)setOptions:;
- (double)delay;
- (unsigned long long)options;
- (void)animate:completion:;
@end
