@interface AWEIMSyncDispatchRaceContext : NSObject
@property (nonatomic) BOOL enableContinue;
@property (nonatomic) BOOL reversalPriority;
@property (nonatomic) Q priority;
- (BOOL)reversalPriority;
- (void)setReversalPriority:;
- (unsigned long long)priority;
- (void)setPriority:;
- (BOOL)enableContinue;
- (void)setEnableContinue:;
@end
