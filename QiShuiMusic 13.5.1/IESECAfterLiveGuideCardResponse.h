@interface IESECAfterLiveGuideCardResponse : MTLModel
@property (nonatomic) Q cardType;
@property (nonatomic) IESECAfterLiveGuideCardShopCardInfo shopCardInfo;
@property (nonatomic) IESECAfterLiveGuideCardWindowCardInfo windowCardInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShopCardInfo:;
- (void)setWindowCardInfo:;
- (id)shopCardInfo;
- (id)windowCardInfo;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
