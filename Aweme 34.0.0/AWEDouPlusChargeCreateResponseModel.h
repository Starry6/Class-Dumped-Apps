@interface AWEDouPlusChargeCreateResponseModel : AWEBaseApiModel
@property (nonatomic) NSDictionary iapDeskParam;
@property (nonatomic) NSString defaultChannel;
@property (nonatomic) NSArray channels;
- (id)iapDeskParam;
- (void)setIapDeskParam:;
- (void)setDefaultChannel:;
- (id)channels;
- (void).cxx_destruct;
- (void)setChannels:;
- (id)defaultChannel;
+ (id)JSONKeyPathsByPropertyKey;
@end
