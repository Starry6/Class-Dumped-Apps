@interface BDUGGetGeckoChannelInfoBridgeModel : BDXBridgeModel
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSArray channels;
- (id)channels;
- (void).cxx_destruct;
- (void)setChannels:;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
