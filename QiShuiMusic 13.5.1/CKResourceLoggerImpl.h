@interface CKResourceLoggerImpl : NSObject
@property (nonatomic) <CKResourceLoggerDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (void)injectLoggerImplementation:;
+ (void)logError:;
+ (id)sharedManager;
+ (void)logInfo:;
@end
