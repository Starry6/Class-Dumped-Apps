@interface AWESearchDynamicResourceChannelManager : NSObject
@property (nonatomic) NSArray searchChannelList;
@property (nonatomic) NSMutableDictionary channelStatusDict;
@property (nonatomic) BOOL isChecked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)gurdDidCleanCachePackageForAccessKey:channel:;
- (void)checkSearchChannelStatusWithForce:;
- (BOOL)isChannelAvailable:;
- (BOOL)isChannelAvailableInCardTemplateDowngrade:;
- (void)setChannelStatusDict:;
- (void)setSearchChannelList:;
- (id)channelStatusDict;
- (id)searchChannelList;
- (void).cxx_destruct;
- (BOOL)isChecked;
- (void)setIsChecked:;
+ (id)sharedInstance;
@end
