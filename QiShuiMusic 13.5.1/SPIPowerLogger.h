@interface SPIPowerLogger : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) C process;
- (id)init;
- (id)captureSnapshot;
- (id)initWithProcessIdentifier:;
- (int)pid;
- (unsigned char)process;
- (id)initWithCurrentProcess;
+ (id)loggerForCurrentProcess;
@end
