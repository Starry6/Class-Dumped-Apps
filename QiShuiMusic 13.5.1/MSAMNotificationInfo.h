@interface MSAMNotificationInfo : NSObject
@property (nonatomic) MSAlertManager owner;
@property (nonatomic) NSString personID;
@property (nonatomic) ^{__CFRunLoopSource=} runLoopSource;
@property (nonatomic) ^{__CFUserNotification=} userNotification;
@property (nonatomic) @? completionBlock;
- (void)dealloc;
- (id)runLoopSource;
- (void)setOwner:;
- (id)personID;
- (void)setCompletionBlock:;
- (id)owner;
- (void)setPersonID:;
- (void)setRunLoopSource:;
- (void)setUserNotification:;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)userNotification;
+ (id)info;
@end
