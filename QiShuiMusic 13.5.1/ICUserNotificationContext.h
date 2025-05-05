@interface ICUserNotificationContext : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) ^{__CFRunLoopSource=} runLoopSourceRef;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)clearRunLoop;
- (id)runLoopSourceRef;
- (void)setRunLoopSourceRef:;
@end
