@interface AWEStudioModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL downloadedResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)videoRecorderWouldAppear;
- (void)onHandleEventsForBackgroundURLSession;
- (void)didUpdateInstallIDFrom:to:;
- (void)didUpdateDeviceIDFrom:to:;
- (BOOL)downloadedResource;
- (void)setDownloadedResource:;
+ (long long)calculateTimestampDiffFromAppDidBecomeActive;
+ (long long)calculateClickShootTimestampDiffWhenClickPublish;
@end
