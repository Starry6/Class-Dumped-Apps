@interface IESLiveSaaSMSeqAnchorRecordView : UIView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel label;
@property (nonatomic) q currentNum;
@property (nonatomic) @? completeHandle;
- (void)animateBegin;
- (id)completeHandle;
- (long long)currentNum;
- (id)descLabel;
- (id)initWithTime:completion:;
- (void)refreshLabel;
- (void)setCompleteHandle:;
- (void)setCurrentNum:;
- (void)setDescLabel:;
- (void)layoutSubviews;
- (void)start;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setBgImageView:;
- (id)bgImageView;
@end
