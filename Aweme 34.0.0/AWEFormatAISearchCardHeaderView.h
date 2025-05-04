@interface AWEFormatAISearchCardHeaderView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseLabel titleLab;
@property (nonatomic) DUXBaseLabel abstractLab;
- (id)titleLab;
- (void)setTitleLab:;
- (void)p_setupLayout;
- (id)abstractLab;
- (void)updateWithDisplayModel:;
- (void)setAbstractLab:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
+ (double)heightOfAbstract:width:;
+ (double)heightWithModel:width:;
@end
