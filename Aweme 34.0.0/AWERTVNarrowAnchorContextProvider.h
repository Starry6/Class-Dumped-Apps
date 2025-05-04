@interface AWERTVNarrowAnchorContextProvider : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) AWERTVRootFeedObserverCenter feedObserver;
@property (nonatomic) <RTVUserProfileManagerInterface> userProfileManager;
@property (nonatomic) <RTVVoipConfigureManagerInterface> configureManager;
@property (nonatomic) <RTVVoipResourceFetcherInterface> resourceFetcher;
@property (nonatomic) <RTVVoipSettingManagerInterface> settingsManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (id)resourceFetcher;
- (id)userProfileManager;
- (id)configureManager;
- (void)shareCurrentFeedAweme:;
- (id)feedObserver;
- (id)__blockShareVideoTypes;
- (void)track_shareVideo:toConversation:awemeModel:;
- (void)track_shareVideo:toUserID:awemeModel:;
- (void)track_shareVideoToConversations:awemeModel:;
- (id)iconOfAnchorType:;
- (id)titleOfAnchorType:;
- (void)handleEventOfAnchorType:roomController:;
- (id)settingsManager;
- (id)injector;
- (void)setSettingsManager:;
- (void).cxx_destruct;
@end
