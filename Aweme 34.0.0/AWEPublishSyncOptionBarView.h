@interface AWEPublishSyncOptionBarView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel syncOptionLabel;
@property (nonatomic) UIButton syncOptionButton;
@property (nonatomic) DUXCheckBox checkBox;
@property (nonatomic) UIButton showDescBubbleButton;
@property (nonatomic) UIImageView showDescBubbleImageView;
@property (nonatomic) DUXPopover syncOptionBarHintbubble;
@property (nonatomic) BOOL isBubbleDismissing;
@property (nonatomic) BOOL publishSyncStatus;
@property (nonatomic) BOOL publishSyncDefaultStatus;
@property (nonatomic) BOOL userHasSelected;
@property (nonatomic) q syncOptionBarStyle;
@property (nonatomic) NSString hotSpotWord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)popoverDidDisappear:;
- (id)hotSpotWord;
- (void)setHotSpotWord:;
- (id)checkBox;
- (void)setCheckBox:;
- (void)configUI;
- (void)updateCurrentStyle:;
- (void)updateCurrentSyncStatus:;
- (void)updateCurrentHotSpotWord:;
- (BOOL)rememberUserSelection;
- (BOOL)isHideInMyPosts;
- (void)setSyncOptionBarStyle:;
- (long long)syncOptionBarStyle;
- (id)showDescBubbleImageView;
- (id)syncOptionLabel;
- (BOOL)publishSyncStatus;
- (BOOL)userHasSelected;
- (BOOL)publishSyncDefaultStatus;
- (id)storageKeyForSyncOption;
- (void)updatePublishSyncStatus:;
- (id)syncOptionButton;
- (id)showDescBubbleButton;
- (void)setIsBubbleDismissing:;
- (void)setPublishSyncStatus:;
- (void)setPublishSyncDefaultStatus:;
- (void)setUserHasSelected:;
- (id)syncButtonaccessibilityHint;
- (BOOL)isBubbleDismissing;
- (id)syncOptionBarHintbubble;
- (void)onSelectSyncBtnClicked:;
- (void)onBubbleBtnClicked:;
- (id)hintBubbleText;
- (void)setSyncOptionLabel:;
- (void)setSyncOptionButton:;
- (void)setShowDescBubbleButton:;
- (void)setShowDescBubbleImageView:;
- (void)setSyncOptionBarHintbubble:;
- (id)init;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
+ (double)syncOptionBarHeight;
@end
