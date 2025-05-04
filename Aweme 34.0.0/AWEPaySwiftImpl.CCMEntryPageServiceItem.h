@interface AWEPaySwiftImpl.CCMEntryPageServiceItem : MTLModel
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) _TtC15AWEPaySwiftImpl18CCMFirstPayChannel firstPayChannel;
@property (nonatomic) _TtC15AWEPaySwiftImpl18CCMTopDiscountInfo topDiscountInfo;
@property (nonatomic) _TtC15AWEPaySwiftImpl18CCMServiceSubTitle serviceSubTitle;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)firstPayChannel;
- (void)setFirstPayChannel:;
- (id)topDiscountInfo;
- (void)setTopDiscountInfo:;
- (id)serviceSubTitle;
- (void)setServiceSubTitle:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)serviceType;
- (void).cxx_destruct;
- (id)title;
- (void)setServiceType:;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
