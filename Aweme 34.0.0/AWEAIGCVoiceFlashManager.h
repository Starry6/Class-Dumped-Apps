@interface AWEAIGCVoiceFlashManager : NSObject
- (BOOL)isSameDay:date2:;
- (BOOL)enableSearchAIHomeLeftSideBar;
- (id)voiceFlashStorage;
- (long long)voiceFlashGuideCountAllMax;
- (void)saveVoiceFlashGuide:lastDayGuideCount:guideCountAll:;
- (long long)voiceFlashGuideCountDayMax;
- (BOOL)shouldShowVoiceFlashGuide;
- (long long)voiceFlashPlayCountInner;
+ (id)sharedInstance;
@end
