@interface AWETeenSpeechSearchTracker : NSObject
+ (void)trackHomeSpeechGuideShow:guideType:;
+ (void)trackHomeSpeechGuideClick:guideType:;
+ (void)trackSearchMicrophoneUseDuration:groupID:duration:clickType:;
+ (void)trackSearchMicrophoneClick:groupID:clickType:;
+ (void)trackSpeechInitDuration:;
@end
