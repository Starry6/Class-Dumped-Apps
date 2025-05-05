@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter
@property (nonatomic) q _state;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) BOOL hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (nonatomic) NSDate estimatedScrollEndDate;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isDecelerating;
- (long long)_state;
- (void)setVisible:;
- (void)_setState:;
- (BOOL)isDecelerating;
- (BOOL)isScrolling;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)setScrolling:;
- (void)updateOutput;
- (void)setEstimatedScrollEndDate:;
- (void)setDecelerating:;
- (void)setTargetVisibilityOffset:;
- (void)setHasTargetVisibilityOffset:;
- (void)setVisibilityOffset:;
- (double)visibilityOffset;
- (BOOL)hasTargetVisibilityOffset;
- (double)targetVisibilityOffset;
- (id)estimatedScrollEndDate;
@end
