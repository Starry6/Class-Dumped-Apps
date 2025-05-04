@interface AWEMiniLunaPrivacyGuideManager : NSObject
@property (nonatomic) AWEMusicStreamingMiniLunaGuidePopupView privacyView;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString secUserIDMD5;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) <AWEMiniLunaPrivacyGuideDelegate> delegate;
@property (nonatomic) AWEMusicDSPEventModel eventModel;
- (id)secUserID;
- (void)setSecUserID:;
- (id)eventModel;
- (void)setEventModel:;
- (id)initWithSecId:;
- (BOOL)showPrivacyActionSheetOnViewIfNeed:musicVc:;
- (void)setSecUserIDMD5:;
- (id)secUserIDMD5;
- (BOOL)p_showPrivacyActionSheetOnView:musicVc:;
- (id)p_key;
- (void)p_trackPopupShow;
- (id)p_trackParams;
- (void)popupViewDidDisappear:method:;
- (void)setUserDefaults:;
- (id)userDefaults;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setPrivacyView:;
- (id)privacyView;
- (BOOL)hasShown;
@end
