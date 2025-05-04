@interface AWEFCoinBridgeTokenShareMethodParamsModel : BDXBridgeModel
@property (nonatomic) NSString tipText;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString shareTemplate;
@property (nonatomic) NSInteger channelType;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)tipText;
- (void)setTipText:;
- (id)shareTemplate;
- (void)setShareTemplate:;
- (int)channelType;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setChannelType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
