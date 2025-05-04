@interface AWEMusicPrivacyManager : NSObject
@property (nonatomic) AWEMusicPrivacyPopupView privacyView;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString secUserIDMD5;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) <AWEMusicPrivacyManagerDelegate> delegate;
@property (nonatomic) BOOL playlistIsVisible;
@property (nonatomic) BOOL musicIsVisible;
- (id)secUserID;
- (void)setSecUserID:;
- (id)initWithSecId:;
- (void)showPrivacyActionSheetOnViewIfNeed:musicVc:;
- (void)setSecUserIDMD5:;
- (id)secUserIDMD5;
- (void)p_showPrivacyActionSheetOnView:musicVc:;
- (void)popupViewDidDisappear:method:;
- (BOOL)playlistIsVisible;
- (BOOL)musicIsVisible;
- (void)setUserDefaults:;
- (id)userDefaults;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setPrivacyView:;
- (id)privacyView;
- (BOOL)hasShown;
@end
