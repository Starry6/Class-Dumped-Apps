@interface AWEDeliveryChatDeliveryInfoModel : MTLModel
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString deliveryContent;
@property (nonatomic) NSString locationContent;
@property (nonatomic) NSString onTapScheme;
@property (nonatomic) NSArray etaInfoArr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deliveryContent;
- (id)locationContent;
- (id)etaInfoArr;
- (id)onTapScheme;
- (void)setDeliveryContent:;
- (void)setLocationContent:;
- (void)setOnTapScheme:;
- (void)setEtaInfoArr:;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
+ (id)etaInfoArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
