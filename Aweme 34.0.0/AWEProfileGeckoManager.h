@interface AWEProfileGeckoManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)loadGeckoImageWithFolder:fileName:completion:;
+ (void)loadGeckoResourceWithFolder:channelName:fileName:completion:;
+ (id)urlWithBundleName:specificChannel:;
+ (id)taskConfigWithBundleName:specificChannel:;
+ (id)profileGeckoSetting;
+ (id)profileGeckoHostPrefix;
+ (id)profileChannelName;
+ (void)loadGeckoResourceWithFolder:fileName:completion:;
@end
