@interface CEKSelectionFeedbackGenerator : NSObject
@property (nonatomic) UISelectionFeedbackGenerator _feedbackGenerator;
@property (nonatomic) I _endStopSoundID;
@property (nonatomic) I _majorTickSoundID;
@property (nonatomic) I _minorTickSoundID;
@property (nonatomic) I _overscrollTickSoundID;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_feedbackGenerator;
- (void)prepareFeedback;
- (void)performFeedback;
- (void)playMinorTickSound;
- (void)playMajorTickSound;
- (void)playEndTickSound;
- (void)playOverscrollTickSound;
- (unsigned int)_endStopSoundID;
- (unsigned int)_majorTickSoundID;
- (unsigned int)_minorTickSoundID;
- (unsigned int)_overscrollTickSoundID;
@end
