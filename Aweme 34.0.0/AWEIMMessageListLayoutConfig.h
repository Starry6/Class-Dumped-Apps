@interface AWEIMMessageListLayoutConfig : NSObject
@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (nonatomic) @? completion;
@property (nonatomic) @? coordinateAnimation;
@property (nonatomic) Q options;
@property (nonatomic) CAMediaTimingFunction timingFunction;
- (void)setCoordinateAnimation:;
- (id)coordinateAnimation;
- (id)timingFunction;
- (void)setTimingFunction:;
- (id)completion;
- (void)setAnimated:;
- (BOOL)animated;
- (void)setCompletion:;
- (void)setDuration:;
- (void)setOptions:;
- (id)description;
- (unsigned long long)options;
- (void).cxx_destruct;
- (double)duration;
- (id)copyWithZone:;
+ (id)wrapper:;
@end
