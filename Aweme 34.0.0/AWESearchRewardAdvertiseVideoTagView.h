@interface AWESearchRewardAdvertiseVideoTagView : UIView
@property (nonatomic) UILabel previewLabel;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q lastRemainTime;
- (void)updateRemainTime:;
- (void)updateCurrentTime:;
- (id)previewLabel;
- (void)setPreviewLabel:;
- (void)updateStartTime:endTime:;
- (void)updatePaidStatus:;
- (void)setLastRemainTime:;
- (id)attributedTextWithText:;
- (long long)lastRemainTime;
- (id)init;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (void)reset;
- (double)startTime;
- (void)setupUI;
@end
