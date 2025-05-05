@interface IESLiveRecordCountDownView : UIView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) q currentNum;
@property (nonatomic) @? completeHandle;
@property (nonatomic) BOOL clearBg;
- (void)reStart;
- (BOOL)clearBg;
- (void)animateBegin;
- (id)completeHandle;
- (long long)currentNum;
- (id)initWithAnimationCompletion:;
- (id)initWithAnimationCompletion:clearBackgroundColor:;
- (void)refreshLabel;
- (void)setClearBg:;
- (void)setCompleteHandle:;
- (void)setCurrentNum:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)start;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setBgImageView:;
- (id)bgImageView;
@end
