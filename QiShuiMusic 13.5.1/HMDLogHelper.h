@interface HMDLogHelper : NSObject
@property (nonatomic) HMDLogRedirector nslogRedirector;
@property (nonatomic) HMDLogRedirector printfRedirector;
@property (nonatomic) NSThread thread;
- (id)nslogRedirector;
- (id)printfRedirector;
- (void)setNslogRedirector:;
- (void)setPrintfRedirector:;
- (void)setRedirectNSLogToAlogEnable:;
- (void)setRedirectNSLogToAlogEnable:withCallback:;
- (void)setRedirectPrintfToAlogEnable:;
- (void)setRedirectPrintfToAlogEnable:withCallback:;
- (void)startRunloop;
- (id)thread;
- (id)init;
- (void).cxx_destruct;
- (void)setThread:;
+ (id)sharedInstance;
@end
