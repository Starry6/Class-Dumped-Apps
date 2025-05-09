@interface PGControlsViewModel : NSObject
@property (nonatomic) <PGControlsViewModelDelegate> delegate;
@property (nonatomic) PGPlaybackState playbackState;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) q secondsUntilPrerollSkippable;
@property (nonatomic) BOOL isPrerollSkippable;
@property (nonatomic) BOOL inActivitySession;
@property (nonatomic) NSString screenSharingTitle;
@property (nonatomic) UIImage screenSharingAvatar;
@property (nonatomic) PGControlsViewModelValues values;
@property (nonatomic) double preferredMinimumWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)playbackState;
- (id)values;
- (void)setInterrupted:;
- (void)setDelegate:;
- (BOOL)isInterrupted;
- (id)delegate;
- (void).cxx_destruct;
- (void)updatePlaybackStateWithDiff:;
- (double)preferredMinimumWidth;
- (void)setInActivitySession:;
- (void)setScreenSharingTitle:;
- (void)setScreenSharingAvatar:;
- (unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:;
- (void)handleActionButtonTapped;
- (void)handleCancelButtonTapped;
- (void)handleDoubleTap;
- (void)handleSingleTap;
- (void)handleDoubleDoubleTap;
- (void)handleRestoreButtonTapped;
- (void)handleSkipBackButtonTapped;
- (void)handleSkipForwardButtonTapped;
- (void)handleSkipPrerollButtonTapped;
- (long long)secondsUntilPrerollSkippable;
- (BOOL)isPrerollSkippable;
- (void)_updateViewModelValues;
- (BOOL)isInActivitySession;
- (id)screenSharingTitle;
- (id)screenSharingAvatar;
@end
