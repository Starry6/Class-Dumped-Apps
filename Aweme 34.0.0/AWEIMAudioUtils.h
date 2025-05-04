@interface AWEIMAudioUtils : NSObject
+ (BOOL)isAudioMessageType:;
+ (BOOL)isUnreadAudioMessage:;
+ (id)topMessageBaseVC;
+ (id)findFirstUnreadAudioOnScreenWithBaseVC:;
+ (BOOL)isAudioMessage:;
@end
