@interface AWEPluginWatcher : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) AWEGokuPlugin plugin;
- (void)dealloc;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)plugin;
- (void)setPlugin:;
+ (void)watchPlugin:forKey:;
@end
