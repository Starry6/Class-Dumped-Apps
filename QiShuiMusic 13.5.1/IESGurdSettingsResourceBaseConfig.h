@interface IESGurdSettingsResourceBaseConfig : NSObject
@property (nonatomic) IESGurdSettingsResourceConfigCDNFallBack CDNFallBack;
@property (nonatomic) NSArray pipelineItemsArray;
@property (nonatomic) NSDictionary prefixToAccessKeyDictionary;
@property (nonatomic) IESGurdSettingsResourceConfigCDNMultiVersion CDNMultiVersion;
- (id)CDNMultiVersion;
- (id)CDNFallBack;
- (void)setCDNFallBack:;
- (void)setPrefixToAccessKeyDictionary:;
- (id)pipelineItemsArray;
- (id)prefixToAccessKeyDictionary;
- (void)setCDNMultiVersion:;
- (void)setPipelineItemsArray:;
- (void).cxx_destruct;
+ (id)configWithDictionary:;
@end
