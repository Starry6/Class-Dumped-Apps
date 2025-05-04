@interface AWECodeGenSubscribeChannelModel : AWEBaseDataModel
@property (nonatomic) NSString channelId;
@property (nonatomic) NSString textDesc;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) q subStatus;
@property (nonatomic) q defaultShowStatus;
- (id)iconUrl;
- (void)setIconUrl:;
- (long long)subStatus;
- (id)textDesc;
- (void)setSubStatus:;
- (long long)defaultShowStatus;
- (void)setTextDesc:;
- (void)setDefaultShowStatus:;
- (void).cxx_destruct;
- (id)channelId;
- (void)setChannelId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
