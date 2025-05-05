@interface BWLimitedGMErrorLogger : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger maxLoggingCount;
@property (nonatomic) NSInteger currentLoggingCount;
- (void)dealloc;
- (id)initWithName:maxLoggingCount:;
- (int)currentLoggingCount;
- (void)resetCurrentLoggingCounter;
- (id)name;
- (void)logErrorNumber:errorString:;
- (int)maxLoggingCount;
@end
