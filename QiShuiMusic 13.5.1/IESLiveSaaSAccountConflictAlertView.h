@interface IESLiveSaaSAccountConflictAlertView : UIView
@property (nonatomic) BOOL isShowing;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIView separatorTopLine;
@property (nonatomic) UIView separatorCenterLine;
- (void)didCancelButtonPressed:;
- (void)didConfirmButtonPressed:;
- (void)jumpToDouyin;
- (id)separatorCenterLine;
- (id)separatorTopLine;
- (void)setIsShowing:;
- (void)setSeparatorCenterLine:;
- (void)setSeparatorTopLine:;
- (void)dismiss;
- (id)contentView;
- (id)init;
- (BOOL)isShowing;
- (void)setTitleLabel:;
- (void)show;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (void)setContentView:;
- (id)titleLabel;
- (id)cancelButton;
- (void)setupSubviews;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
