@interface BU_IESGurdLRUCacheCleaner : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) BU_IESGurdLRUCacheLinkedList channelsLinkedList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelsLinkedList;
- (id)channelsToBeCleaned;
- (id)cleanerTypeString;
- (id)debugInfoDictionary;
- (void)gurdDidAddChannelWhitelist:;
- (void)gurdDidApplyPackageForChannel:;
- (void)gurdDidCleanPackageForChannel:;
- (void)gurdDidGetCachePackageForChannel:;
- (void)setChannelsLinkedList:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)cleanerWithAccessKey:channelsArray:configuration:;
@end
