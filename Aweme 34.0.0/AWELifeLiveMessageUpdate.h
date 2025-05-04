@interface AWELifeLiveMessageUpdate : MTLModel
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSArray cardInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardInfos;
- (void)setServerTime:;
- (void)setCardInfos:;
- (id)serverTime;
- (void).cxx_destruct;
+ (id)cardInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
