@interface AWESearchVideoCardAnswerTagView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleView;
@property (nonatomic) AWEAwemeSearchVideoShortAnswerModel shortAnswerModel;
- (id)shortAnswerModel;
- (void)setShortAnswerModel:;
- (id)titleView;
- (void)setTitleView:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
@end
