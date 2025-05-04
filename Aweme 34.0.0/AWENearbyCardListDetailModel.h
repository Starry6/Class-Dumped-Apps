@interface AWENearbyCardListDetailModel : AWEBaseApiModel
@property (nonatomic) q displayType;
@property (nonatomic) NSArray cards;
@property (nonatomic) NSString cardRequestID;
@property (nonatomic) AWENearbyCardRejectModel cardRejectInfo;
- (void)setCards:;
- (id)cardRequestID;
- (void)setCardRequestID:;
- (id)cardRejectInfo;
- (void)setCardRejectInfo:;
- (long long)displayType;
- (void)setDisplayType:;
- (void).cxx_destruct;
- (id)cards;
+ (id)cardsJSONTransformer;
+ (id)cardRejectInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
