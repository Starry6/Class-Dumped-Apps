@interface MRProtocolMessageLogger : NSObject
@property (nonatomic) BOOL shouldLog;
@property (nonatomic) BOOL shouldVerboselyLog;
- (BOOL)shouldLog;
- (id)init;
- (void)setShouldLog:;
- (void)logMessage:client:protocolMessage:;
- (BOOL)shouldVerboselyLog;
- (void)setShouldVerboselyLog:;
+ (id)sharedLogger;
@end
