@interface AWEIMAudioMessageTranslateManager : NSObject
@property (nonatomic) NSMutableDictionary dictionaryObserver;
@property (nonatomic) AWEIMAudioTranslateStatusObserver currentTranslateObserver;
@property (nonatomic) NSMutableArray translateList;
@property (nonatomic) AWEIMMessage firstUnreadAudioMessage;
@property (nonatomic) q translatedCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleDidEnterBackgroundNotification:;
- (void)handleAudioWillStartPlayNotification:;
- (id)getObserverForMessageId:conversationId:;
- (void)translateAudioMessageList:convShortID:;
- (BOOL)findFirstUnreadAudioMessageInGroups:;
- (void)stopTranslateAndClearAllObserver:;
- (void)appendRunningAutoTranslateListNewComeMessage:;
- (BOOL)isTranslateFinishFlagWithMessage:;
- (void)requestTranslateWithMessageList:convShortID:needResult:completion:;
- (void)trackAutoTranslateWithCount:failedCount:;
- (id)firstUnreadAudioMessage;
- (void)stopPlayerIfRecalledMessageIsPlaying:;
- (id)dictionaryObserver;
- (void)setDictionaryObserver:;
- (id)currentTranslateObserver;
- (void)setFirstUnreadAudioMessage:;
- (void)setTranslatedCount:;
- (void)setCurrentTranslateObserver:;
- (id)translateList;
- (void)p_requestTranslateWithParams:completion:;
- (void)p_translateAudioMessageList:convShortID:;
- (void)setTranslateList:;
- (long long)translatedCount;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)isMessageTranslateEnable:;
+ (void)trackTranslateWithClickMethod:;
+ (id)sharedInstance;
@end
