@interface IESIMChallengeExtraItem : MTLModel
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL isImages;
@property (nonatomic) BOOL sortAvailable;
@property (nonatomic) BOOL isNearBy;
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString cityName;
@property (nonatomic) NSString nearbyHashtagStickerID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isImages;
- (BOOL)isNearBy;
- (id)nearbyHashtagStickerID;
- (void)setIsImages:;
- (void)setIsNearBy:;
- (void)setNearbyHashtagStickerID:;
- (void)setSortAvailable:;
- (BOOL)sortAvailable;
- (BOOL)isLive;
- (void).cxx_destruct;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
- (void)setIsLive:;
+ (id)JSONKeyPathsByPropertyKey;
@end
