@interface AWEECOMIMResourceOfflineManager : NSObject
@property (nonatomic) AWEGeckoCDNManager manager;
- (void)setManager:;
- (id)init;
- (id)manager;
- (void).cxx_destruct;
+ (id)cdnDomain;
+ (id)sharedInstance;
@end
