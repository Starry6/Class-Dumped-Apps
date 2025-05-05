@interface BU_IESGurdFIFOCacheCleaner : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSMutableArray channelsArray;
@property (nonatomic) q capacity;
@property (nonatomic) NSLock channelsArrayLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelsArray;
- (id)channelsArrayLock;
- (id)channelsToBeCleaned;
- (id)cleanerTypeString;
- (void)gurdDidAddChannelWhitelist:;
- (void)gurdDidApplyPackageForChannel:;
- (void)gurdDidCleanPackageForChannel:;
- (void)setChannelsArray:;
- (void)setChannelsArrayLock:;
- (long long)capacity;
- (void)setCapacity:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)cleanerWithAccessKey:channelsArray:configuration:;
@end
