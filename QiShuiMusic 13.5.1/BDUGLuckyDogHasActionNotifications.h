@interface BDUGLuckyDogHasActionNotifications : NSObject
@property (nonatomic) BOOL hasUnsentTaskType;
@property (nonatomic) BOOL hasTimeOut;
@property (nonatomic) BOOL hasEnteredBackground;
@property (nonatomic) double lastHasActionNotificationTime;
@property (nonatomic) q lastTaskType;
@property (nonatomic) q lastScene;
@property (nonatomic) <BDUGLuckyDogHasActionNotificationsDelegate> delegate;
@property (nonatomic) BOOL hasPendingAckAction;
@property (nonatomic) BOOL hasPendingAckActionAfterPasteboardPrivacyDialog;
- (void)__didEnterBackground;
- (BOOL)hasEnteredBackground;
- (BOOL)hasPendingAckAction;
- (BOOL)hasPendingAckActionAfterPasteboardPrivacyDialog;
- (BOOL)hasTimeOut;
- (BOOL)hasUnsentTaskType;
- (double)lastHasActionNotificationTime;
- (long long)lastTaskType;
- (void)onDidAckActionWithTaskType:scene:;
- (void)setHasEnteredBackground:;
- (void)setHasPendingAckAction:;
- (void)setHasPendingAckActionAfterPasteboardPrivacyDialog:;
- (void)setHasTimeOut:;
- (void)setHasUnsentTaskType:;
- (void)setLastHasActionNotificationTime:;
- (void)setLastScene:;
- (void)setLastTaskType:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)lastScene;
+ (id)sharedInstance;
@end
