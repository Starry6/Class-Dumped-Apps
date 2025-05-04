@interface AWEPlayDislikeWithDrawTagView : UIView
@property (nonatomic) UIView container;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) <AWEPlayDislikeTagViewDelegate> delegate;
- (void)didTapTagView:;
- (void)setContainer:;
- (id)container;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (void)updateUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
