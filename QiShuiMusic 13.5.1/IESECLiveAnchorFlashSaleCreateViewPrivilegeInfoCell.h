@interface IESECLiveAnchorFlashSaleCreateViewPrivilegeInfoCell : IESECLiveAnchorFlashSaleCreateViewCell
@property (nonatomic) UILabel privilegeNameLabel;
@property (nonatomic) IESECButton redSelectButton;
@property (nonatomic) UILabel subMsgLabel;
@property (nonatomic) IESECLiveAnchorCreateFlashSalePrivilegeInfoModel model;
- (void)p_setupCustomUI;
- (id)redSelectButton;
- (void)setSubMsgLabel:;
- (void)handleTapRedButton:;
- (id)privilegeNameLabel;
- (void)setItem:showWarn:;
- (void)setPrivilegeNameLabel:;
- (void)setRedSelectButton:;
- (id)subMsgLabel;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setModel:;
- (void).cxx_destruct;
@end
