@interface VCPVideoMetaFocusSegment : VCPMetaSegment
@property (nonatomic) q focusStatus;
- (long long)focusStatus;
- (void)setFocusStatus:;
- (void)resetSegment:atTime:;
- (void)updateSegment:atTime:;
- (id)initWithFocusStatus:atTime:;
@end
