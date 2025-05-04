@interface AWEGurdConfigServiceImpl : NSObject
@property (nonatomic) <AWEGurdConfigDelegate> configDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithConfigDelegate:;
- (id)cacheRootDirectory;
- (void)registerPrefetchChannels:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setupIfNeeded;
- (id)configDelegate;
- (void)setConfigDelegate:;
+ (id)sharedInstance;
@end
