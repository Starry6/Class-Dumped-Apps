@interface IESLiveGuidanceToastView : UIView
@property (nonatomic) UIButton addButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel label;
@property (nonatomic) NSString detailInfo;
- (id)detailInfo;
- (void)setDetailInfo:;
- (void)showOnView:completion:;
- (void)dismiss;
- (id)init;
- (void)dismissWithCompletion:;
- (void)setLabel:;
- (id)label;
- (void)show;
- (void)layout;
- (void)setup;
- (void).cxx_destruct;
- (id)closeButton;
- (void)setCloseButton:;
- (id)addButton;
- (void)setAddButton:;
@end
