@interface AWEProfileSocialStatisticView : UIView
@property (nonatomic) UILabel followLabel;
@property (nonatomic) UILabel fansLabel;
@property (nonatomic) UILabel praiseLabel;
@property (nonatomic) UILabel friendLabel;
@property (nonatomic) UILabel followPrefixBtn;
@property (nonatomic) UILabel fansPrefixBtn;
@property (nonatomic) UILabel praisePrefixBtn;
@property (nonatomic) UILabel friendPrefixBtn;
@property (nonatomic) UIView followContainerView;
@property (nonatomic) UIView fansContainerView;
@property (nonatomic) UIView praiseContainerView;
@property (nonatomic) UIView friendContainerView;
@property (nonatomic) q friendType;
@property (nonatomic) AWEProfileSocialStatisticConfig config;
@property (nonatomic) UIView followAccessView;
@property (nonatomic) UIView fansAccessView;
@property (nonatomic) UIView praiseAccessView;
@property (nonatomic) UIView friendAccessView;
@property (nonatomic) NSNumber followingCount;
@property (nonatomic) NSNumber fansCount;
@property (nonatomic) NSNumber praiseCount;
@property (nonatomic) NSNumber friendCount;
@property (nonatomic) BOOL canShowFriendsLabel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isCompanyUser;
@property (nonatomic) BOOL isTeenModeOn;
@property (nonatomic) BOOL hasUserMood;
@property (nonatomic) double containerWidth;
@property (nonatomic) double labelFont;
@property (nonatomic) double buttonFont;
@property (nonatomic) double gap;
@property (nonatomic) @? followClickedBlock;
@property (nonatomic) @? fansClickedBlock;
@property (nonatomic) @? praiseClickedBlock;
@property (nonatomic) @? friendClickedBlock;
@property (nonatomic) @? blankClickedBlock;
@property (nonatomic) BOOL shouldLimitFansCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFansCount:;
- (id)friendLabel;
- (void)setFriendLabel:;
- (void)setGap:;
- (id)followingCount;
- (void)setFriendType:;
- (id)fansCount;
- (id)praiseLabel;
- (id)fansLabel;
- (void)setPraiseLabel:;
- (void)setFansLabel:;
- (void)setFollowingCount:;
- (id)followLabel;
- (void)setFollowLabel:;
- (void)p_setUpUI;
- (void)p_updateSocialStatisticContent:;
- (id)mateEntranceView;
- (id)mutualEntranceView;
- (void)updateFollowBtnTitle:;
- (void)setFollowClickedBlock:;
- (void)setFansClickedBlock:;
- (void)setFriendClickedBlock:;
- (void)setPraiseClickedBlock:;
- (void)setBlankClickedBlock:;
- (void)setShouldLimitFansCount:;
- (void)updateAllLabelTextColor:;
- (void)updateFansLabel:isLoaded:;
- (void)updateFollowLabel:isLoaded:;
- (void)updateFriendsLabel:isLoaded:;
- (void)updatePraiseLabel:isLoaded:;
- (void)handleTapGestureRecognizerWithLocation:;
- (void)setPraiseCount:;
- (void)setCanShowFriendsLabel:;
- (void)setIsCompanyUser:;
- (void)initFontSize;
- (id)praisePrefixBtn;
- (id)followPrefixBtn;
- (id)fansPrefixBtn;
- (id)friendPrefixBtn;
- (id)praiseAccessView;
- (id)friendAccessView;
- (id)followAccessView;
- (id)fansAccessView;
- (id)praiseContainerView;
- (id)followContainerView;
- (id)fansContainerView;
- (id)friendContainerView;
- (BOOL)canShowFriendsLabel;
- (void)setFontFitScreen;
- (id)fansAttributedTextWith:numberSize:;
- (id)praiseAttributedTextWith:numberSize:;
- (BOOL)shouldLimitFansCount;
- (id)praiseCount;
- (BOOL)isCompanyUser;
- (void)calibrateFontSizeAndGapIfNeeded:;
- (void)updateUIWithResetView:;
- (void)updateFriendPrefixBtnTitle:;
- (void)setIsTeenModeOn:;
- (void)setFontSizeWithNumberSize:btnFontSize:;
- (id)followClickedBlock;
- (id)fansClickedBlock;
- (id)praiseClickedBlock;
- (id)friendClickedBlock;
- (id)blankClickedBlock;
- (double)computeLabelsFullWidthWithFontSize:btnFontSize:;
- (void)changeLabelInTeenMode:;
- (void)updateFollowLabelTitle:;
- (BOOL)compareWidthWithLabel:;
- (void)setFollowContainerView:;
- (void)setFollowPrefixBtn:;
- (void)setFansPrefixBtn:;
- (void)setPraisePrefixBtn:;
- (void)setFriendPrefixBtn:;
- (void)setFansContainerView:;
- (void)setPraiseContainerView:;
- (void)setFriendContainerView:;
- (void)setFollowAccessView:;
- (void)setFansAccessView:;
- (void)setPraiseAccessView:;
- (void)setFriendAccessView:;
- (BOOL)isTeenModeOn;
- (BOOL)hasUserMood;
- (void)setHasUserMood:;
- (void)setConfig:;
- (void)setLabelFont:;
- (double)buttonFont;
- (double)labelFont;
- (void)dealloc;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (double)gap;
- (void)handleTapGestureRecognizer:;
- (void)setFriendCount:;
- (id)friendCount;
- (void)setButtonFont:;
- (double)containerWidth;
- (long long)friendType;
- (void)setContainerWidth:;
+ (id)limitCountFansTextWithFontSize:;
@end
