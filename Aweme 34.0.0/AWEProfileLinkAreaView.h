@interface AWEProfileLinkAreaView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) NSArray linkList;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) BOOL moreButtonClicked;
@property (nonatomic) double currentPointY;
@property (nonatomic) NSString refer;
@property (nonatomic) <AWEProfileLinkAreaViewDelegate> delegate;
- (void)setRefer:;
- (id)refer;
- (id)linkList;
- (void)setLinkList:;
- (void)enterBusinessEditPage:;
- (void)linkLabelClicked:;
- (BOOL)moreButtonClicked;
- (void)configWithContext:;
- (void)setMoreButtonClicked:;
- (double)currentPointY;
- (void)setCurrentPointY:;
- (id)__replaceCompanyUserProfileLinkList:withOriginAdInfo:;
- (BOOL)__isSame:with:;
- (void)__createLinkBtns;
- (BOOL)enableIPLabelIconShow;
- (BOOL)__enableMoreBtnPositionOptimize;
- (id)__createBtnWithLink:width:height:pointX:pointY:index:font:;
- (void)__trackEventWithTag:linkModel:relatedComponentValue:commonTrackDict:;
- (double)__showEditButtonAtPointX:pointY:;
- (id)__getIconNameWithLink:;
- (BOOL)__linkTypeCanEdit:;
- (void)tapMoreButton;
- (void)__linkLabelClicked:openLink:;
- (void)__openLink:sender:;
- (id)__getRelatedComponentValue:;
- (id)__joinEnterpriseParamsIfNeeded:aweme:;
- (void)__transferToWebView:eventID:creativeID:logExtra:;
- (id)__getBTMChainStringWhenTransferWithLink:sender:;
- (void)__trackGameDownloadIfNeededWithLinkModel:forShow:;
- (id)init;
- (id)delegate;
- (id)moreButton;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (void)setDelegate:;
- (id)context;
- (void)setupUI;
@end
