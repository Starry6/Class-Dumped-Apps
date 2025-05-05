@interface HMDALogUpload : NSObject
@property (nonatomic) <HMDTTMonitorServiceProtocol> ttmonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_uploadLogFiles:commandModel:originFilesCount:completion:;
- (void)excuteCommand:completion:;
- (void)setTtmonitor:;
- (id)ttmonitor;
- (id)init;
- (void).cxx_destruct;
+ (id)createInstance;
@end
