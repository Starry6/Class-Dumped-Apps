@interface AWEStorageServiceMonitorMMKVHandler : NSObject
@property (nonatomic) BOOL hmdTrackThread;
@property (nonatomic) BOOL hmdTrackEnable;
@property (nonatomic) NSArray recoverCRCList;
@property (nonatomic) NSArray recoverLengthList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)onMMKVCRCCheckFail:;
- (unsigned long long)onMMKVFileLengthError:;
- (id)recoverCRCList;
- (BOOL)hmdTrackEnable;
- (BOOL)hmdTrackThread;
- (id)recoverLengthList;
- (void)setHmdTrackThread:;
- (void)setHmdTrackEnable:;
- (void)setRecoverCRCList:;
- (void)setRecoverLengthList:;
- (void).cxx_destruct;
- (void)startHandler;
+ (id)sharedInstance;
@end
