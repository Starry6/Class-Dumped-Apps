@interface EDListUnsubscribeHandler : NSObject
@property (nonatomic) <EFScheduler> scheduler;
@property (nonatomic) EMListUnsubscribeDetector detector;
- (id)init;
- (id)scheduler;
- (void).cxx_destruct;
- (void)unsubscribeWithCommand:completion:;
- (void)ignoreWithCommand:completion:;
- (id)detector;
- (void)unsubscribeMailtoWithCommand:completion:;
- (void)unsubscribeHTMLWithCommand:timeout:completion:;
+ (id)log;
@end
