@interface ISVitalityFilter : NSObject
@property (nonatomic) BOOL _isPerformingInputChanges;
@property (nonatomic) BOOL _isPerformingOutputChanges;
@property (nonatomic) BOOL _outputDidChange;
@property (nonatomic) BOOL scrubbing;
@property (nonatomic) double scrubOffset;
@property (nonatomic) double playRate;
@property (nonatomic) <ISVitalitySettings> settings;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) BOOL hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (nonatomic) NSDate estimatedScrollEndDate;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isDecelerating;
@property (nonatomic) @? outputChangeHandler;
- (BOOL)isScrubbing;
- (id)init;
- (void)setVisible:;
- (id)settings;
- (void)setScrubbing:;
- (BOOL)isDecelerating;
- (BOOL)isScrolling;
- (id)initWithSettings:;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)setScrolling:;
- (void)_invalidateOutput;
- (double)playRate;
- (void)setEstimatedScrollEndDate:;
- (void)setDecelerating:;
- (void)setTargetVisibilityOffset:;
- (void)setHasTargetVisibilityOffset:;
- (void)setVisibilityOffset:;
- (double)visibilityOffset;
- (BOOL)hasTargetVisibilityOffset;
- (double)targetVisibilityOffset;
- (id)estimatedScrollEndDate;
- (void)_setPerformingInputChanges:;
- (BOOL)_isPerformingInputChanges;
- (void)performInputChanges:;
- (id)outputChangeHandler;
- (void)setOutputChangeHandler:;
- (void)performOutputChanges:;
- (void)inputDidChange;
- (void)setScrubOffset:;
- (void)setPlayRate:;
- (double)scrubOffset;
- (BOOL)_isPerformingOutputChanges;
- (void)_setPerformingOutputChanges:;
- (BOOL)_outputDidChange;
- (void)_setOutputDidChange:;
@end
