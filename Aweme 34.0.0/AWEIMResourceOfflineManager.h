@interface AWEIMResourceOfflineManager : NSObject
@property (nonatomic) <IESIMGeckoManagerProtocol> manager;
- (void)setManager:;
- (id)init;
- (id)manager;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (id)sharedInstance;
@end
