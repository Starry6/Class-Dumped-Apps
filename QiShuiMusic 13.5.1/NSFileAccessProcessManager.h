@interface NSFileAccessProcessManager : NSObject
@property (nonatomic) @? suspensionHandler;
@property (nonatomic) NSArray URLs;
- (void)dealloc;
- (id)suspensionHandler;
- (void)killProcessWithMessage:;
- (void)_ensureMonitor;
- (id)URLs;
- (id)initWithClient:queue:;
- (void)allowSuspension;
- (void)safelySendMessageWithReplyUsingBlock:;
- (void)setURLs:;
- (void)preventSuspensionWithActivityName:;
- (void)invalidate;
- (void)setSuspensionHandler:;
+ (BOOL)needToManageConnection:forURLs:;
@end
