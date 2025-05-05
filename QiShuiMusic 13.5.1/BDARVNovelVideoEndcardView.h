@interface BDARVNovelVideoEndcardView : UIView
@property (nonatomic) UIButton replayButton;
@property (nonatomic) <BDARVNovelVideoEndcardViewDelegate> delegate;
- (void)replayBtnClick:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)replayButton;
- (void)setReplayButton:;
@end
