@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase
@property (nonatomic) UIAnimatableProperty animatableProperty;
@property (nonatomic) BOOL invalidated;
- (id)animatableProperty;
- (id)init;
- (void)dealloc;
- (void)setTransformer:;
- (id)transformer;
- (BOOL)isInvalidated;
- (void).cxx_destruct;
- (void)invalidate;
@end
