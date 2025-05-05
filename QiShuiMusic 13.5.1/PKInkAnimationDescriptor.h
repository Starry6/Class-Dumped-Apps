@interface PKInkAnimationDescriptor : NSObject
@property (nonatomic) double duration;
@property (nonatomic) double sizeDelta;
- (id)mutableCopy;
- (void)setDuration:;
- (double)duration;
- (double)sizeDelta;
- (id)initWithDuration:sizeDelta:;
- (void)setSizeDelta:;
@end
