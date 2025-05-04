@interface AWESearchEpidemicLiveCardModel : AWEBaseApiModel
@property (nonatomic) NSArray roomInfoArray;
- (id)roomInfoArray;
- (void)setRoomInfoArray:;
- (void).cxx_destruct;
+ (id)roomInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
