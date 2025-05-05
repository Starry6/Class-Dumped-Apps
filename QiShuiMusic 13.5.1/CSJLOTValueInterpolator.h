@interface CSJLOTValueInterpolator : NSObject
@property (nonatomic) NSArray keyframes;
@property (nonatomic) CSJLOTKeyframe leadingKeyframe;
@property (nonatomic) CSJLOTKeyframe trailingKeyframe;
@property (nonatomic) BOOL hasDelegateOverride;
- (id)leadingKeyframe;
- (BOOL)hasDelegateOverride;
- (BOOL)hasUpdateForFrame:;
- (id)initWithKeyframes:;
- (double)progressForFrame:;
- (void)setLeadingKeyframe:;
- (void)setTrailingKeyframe:;
- (void)setValueDelegate:;
- (id)trailingKeyframe;
- (void)updateKeyframeSpanForFrame:;
- (void).cxx_destruct;
- (id)keyframes;
- (void)setKeyframes:;
@end
