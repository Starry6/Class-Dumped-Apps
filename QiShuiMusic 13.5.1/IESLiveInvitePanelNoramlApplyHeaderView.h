@interface IESLiveInvitePanelNoramlApplyHeaderView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader guidenceLabel;
@property (nonatomic) @? openPaidLinkBlock;
@property (nonatomic) @? closeBlock;
@property (nonatomic) NSString titleString;
@property (nonatomic) q applyCount;
@property (nonatomic) BOOL hasLinkPaidGudience;
- (long long)applyCount;
- (id)closeBlock;
- (id)guidenceLabel;
- (BOOL)hasLinkPaidGudience;
- (id)openPaidLinkBlock;
- (void)setApplyCount:;
- (void)setCloseBlock:;
- (void)setGuidenceLabel:;
- (void)setHasLinkPaidGudience:;
- (void)setOpenPaidLinkBlock:;
- (void)setUI;
- (void)updateLabelOffset;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)titleString;
- (void)setTitleString:;
+ (id)headerWithOpenPaidLinkBlock:closeBlock:;
@end
