@interface CJPaySubPayTypeDisplayInfo : JSONModel
@property (nonatomic) NSString subPayType;
@property (nonatomic) q index;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString paymentInfo;
- (unsigned long long)p_channelTypeWithSubPayTypeStr:;
- (void)setPaymentInfo:;
- (id)buildShowConfig;
- (id)iconUrl;
- (id)paymentInfo;
- (void)setIconUrl:;
- (void)setSubPayType:;
- (id)subPayType;
- (void)setTitle:;
- (long long)index;
- (id)title;
- (void)setIndex:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
