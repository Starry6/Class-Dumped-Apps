@interface AWEIMSwipeTarget : NSObject
@property (nonatomic) q targetType;
@property (nonatomic) double value;
- (double)offsetForView:minimumOverscroll:;
- (double)value;
- (void)setValue:;
- (long long)targetType;
- (void)setTargetType:;
@end
