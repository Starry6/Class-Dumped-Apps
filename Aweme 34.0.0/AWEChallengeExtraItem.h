@interface AWEChallengeExtraItem : MTLModel
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
- (BOOL)isNearBy;
- (BOOL)isImages;
- (void)setIsImages:;
- (BOOL)sortAvailable;
- (void)setSortAvailable:;
- (void)setIsNearBy:;
- (id)nearbyHashtagStickerID;
- (void)setNearbyHashtagStickerID:;
- (void).cxx_destruct;
- (BOOL)isLive;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
- (void)setIsLive:;
+ (id)JSONKeyPathsByPropertyKey;
@end
