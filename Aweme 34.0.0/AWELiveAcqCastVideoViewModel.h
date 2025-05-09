@interface AWELiveAcqCastVideoViewModel : NSObject
@property (nonatomic) <AWELiveAcqCastVideoViewModelDelegate> delegate;
@property (nonatomic) q bizType;
@property (nonatomic) q panelType;
@property (nonatomic) q tabType;
@property (nonatomic) q feedType;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) BOOL isCasting;
@property (nonatomic) UIView currentUserPannel;
@property (nonatomic) BOOL isHideEndImageView;
@property (nonatomic) BOOL searchEnabled;
@property (nonatomic) BOOL liveStreamEnabled;
@property (nonatomic) BOOL searchUserEnabled;
@property (nonatomic) BOOL searchLiveStreamEnabled;
@property (nonatomic) BOOL richAwemeEnabled;
@property (nonatomic) NSString recommendPlayButtonTitle;
@property (nonatomic) @? preferredContentSizeWillChange;
@property (nonatomic) NSDictionary commonTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tabType;
- (long long)bizType;
- (void)setBizType:;
- (id)mixID;
- (id)searchKeyword;
- (id)commonTrackParams;
- (long long)panelType;
- (void)didClickClose;
- (void)setTabType:;
- (void)setSearchKeyword:;
- (void)setMixID:;
- (void)setPanelType:;
- (void)setCommonTrackParams:;
- (void)didSelectVideo:dataController:currentID:targetFeedID:infoDict:;
- (void)didClickAvatar:;
- (void)didClickRecommendBtn;
- (void)didClickQuit;
- (BOOL)isCasting;
- (void)setIsCasting:;
- (id)currentUserPannel;
- (void)setCurrentUserPannel:;
- (BOOL)isHideEndImageView;
- (void)setIsHideEndImageView:;
- (BOOL)liveStreamEnabled;
- (void)setLiveStreamEnabled:;
- (BOOL)searchUserEnabled;
- (BOOL)searchLiveStreamEnabled;
- (void)setSearchLiveStreamEnabled:;
- (id)preferredContentSizeWillChange;
- (void)setPreferredContentSizeWillChange:;
- (id)createTableView:;
- (id)createCollectionView:collectionViewLayout:;
- (void)didSelectTab:byUser:;
- (void)didSelectMix:;
- (id)user;
- (long long)feedType;
- (void)setUser:;
- (id)roomID;
- (id)delegate;
- (void)setFeedType:;
- (void).cxx_destruct;
- (id)title;
- (void)setRoomID:;
- (void)setDelegate:;
- (void)setTitle:;
- (id)challengeID;
- (BOOL)searchEnabled;
- (void)setSearchEnabled:;
- (void)setChallengeID:;
@end
