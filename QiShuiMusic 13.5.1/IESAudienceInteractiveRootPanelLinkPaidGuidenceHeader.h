@interface IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton acceptButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? openPaidLinkBlock;
@property (nonatomic) @? closeBlock;
- (id)closeBlock;
- (void)didTapAcceptButton;
- (void)didTapCloseBlock;
- (id)openPaidLinkBlock;
- (void)setCloseBlock:;
- (void)setOpenPaidLinkBlock:;
- (void)setUI;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)closeButton;
- (void)setCloseButton:;
- (id)acceptButton;
- (void)setAcceptButton:;
+ (float)heightForGuidenceHeader;
+ (id)header;
@end
