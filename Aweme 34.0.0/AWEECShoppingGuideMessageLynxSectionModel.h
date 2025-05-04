@interface AWEECShoppingGuideMessageLynxSectionModel : AWEECShoppingGuideMessageSectionModel
@property (nonatomic) NSString cardId;
@property (nonatomic) Q cardType;
@property (nonatomic) NSString cardData;
@property (nonatomic) NSString eventData;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSDictionary uiData;
@property (nonatomic) q showHeight;
@property (nonatomic) double actuallyHeight;
- (double)actuallyHeight;
- (void)setActuallyHeight:;
- (id)uiData;
- (void)setUiData:;
- (long long)showHeight;
- (void)setShowHeight:;
- (id)eventData;
- (void).cxx_destruct;
- (id)cardId;
- (id)cardData;
- (unsigned long long)cardType;
- (void)setCardType:;
- (void)setEventData:;
- (void)setCardData:;
- (id)searchID;
- (void)setSearchID:;
- (void)setCardId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
