@interface AWENovelReaderToastView : UIView
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) AWENovelReaderArrowView operationView;
- (void)setRightIcon:;
- (id)operationView;
- (void)setOperationView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)rightIcon;
+ (void)showInVC:title:operationTitle:dismissTime:operationAction:;
@end
