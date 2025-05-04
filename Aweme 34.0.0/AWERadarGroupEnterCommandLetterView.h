@interface AWERadarGroupEnterCommandLetterView : UIView
@property (nonatomic) UILabel letter;
@property (nonatomic) UIView emptyView;
@property (nonatomic) AWERadarSpringActivityConfigModel configModel;
- (void)p_setupUI;
- (id)configModel;
- (void)setConfigModel:;
- (id)letter;
- (void)displayEmptyView;
- (void)displayLetterLabel:;
- (void)setLetterInvalid;
- (void)setLetter:;
- (id)init;
- (void).cxx_destruct;
- (id)emptyView;
- (void)setEmptyView:;
@end
