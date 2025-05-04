@interface AWEIMOpenRedPacketAlert : NSObject
@property (nonatomic) AWEIMOpenRedPacketAlertContext context;
@property (nonatomic) @? pendingCloseCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (double)showTimeoutWithContext:;
- (void)showWithCloseCallback:;
- (void)__log:;
- (void)didClose:;
- (id)initWithContetxt:;
- (void)setPendingCloseCallback:;
- (id)pendingCloseCallback;
- (void)show;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
