@interface AWEIMMessageListContinuousFoldTrack : NSObject
+ (id)baseParameters:;
+ (void)trackActionType:conversation:group:;
+ (void)trackEnterPersonDetail:;
+ (void)trackProcessDuration:actionType:totalMsgCount:conversation:;
@end
