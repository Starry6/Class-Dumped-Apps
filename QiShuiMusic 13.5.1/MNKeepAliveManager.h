@interface MNKeepAliveManager : NSObject
@property (nonatomic) Q counter;
@property (nonatomic) NSString launchdKeepAliveFile;
@property (nonatomic) NSFileManager fileManager;
- (id)fileManager;
- (id)init;
- (void)setFileManager:;
- (void).cxx_destruct;
- (unsigned long long)counter;
- (void)setCounter:;
- (void)checkIn;
- (void)checkOut;
- (id)launchdKeepAliveFile;
- (void)setLaunchdKeepAliveFile:;
+ (id)sharedInstance;
@end
