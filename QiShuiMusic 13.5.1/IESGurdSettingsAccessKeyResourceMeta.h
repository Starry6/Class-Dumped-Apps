@interface IESGurdSettingsAccessKeyResourceMeta : NSObject
@property (nonatomic) NSDictionary channelConfigDictionary;
@property (nonatomic) IESGurdSettingsResourceBaseConfig accessKeyConfig;
@property (nonatomic) NSArray allChannels;
- (id)accessKeyConfig;
- (id)channelConfigDictionary;
- (void)setAccessKeyConfig:;
- (void)setChannelConfigDictionary:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)allChannels;
+ (id)metaWithDictionary:;
@end
