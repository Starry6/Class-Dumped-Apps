@interface AWEIMUserByteSyncManager : NSObject
+ (void)registerByteSync;
+ (int)byteSyncBusinessID;
+ (void)rerouteWithMessage:;
+ (void)handleMessageInChatBlockGuideWithModel:;
@end
