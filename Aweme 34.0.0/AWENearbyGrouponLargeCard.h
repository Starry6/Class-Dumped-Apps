@interface AWENearbyGrouponLargeCard : AWEBaseApiModel
@property (nonatomic) q cardType;
@property (nonatomic) AWENearbyGrouponLargeCardRoomInfo roomInfo;
- (id)roomInfo;
- (void)setRoomInfo:;
- (void).cxx_destruct;
- (long long)cardType;
- (void)setCardType:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)roomInfoJSONTransformer;
@end
