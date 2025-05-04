@interface AWEAwemeVisualSearchInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL canShowEntrance;
@property (nonatomic) q enableLongPressRequestTag;
@property (nonatomic) BOOL isEcomImg;
@property (nonatomic) BOOL isHighAccuracyEcom;
@property (nonatomic) BOOL isHighRecallEcom;
- (BOOL)isEcomImg;
- (BOOL)canShowEntrance;
- (void)setCanShowEntrance:;
- (long long)enableLongPressRequestTag;
- (void)setEnableLongPressRequestTag:;
- (void)setIsEcomImg:;
- (BOOL)isHighAccuracyEcom;
- (void)setIsHighAccuracyEcom:;
- (BOOL)isHighRecallEcom;
- (void)setIsHighRecallEcom:;
+ (id)JSONKeyPathsByPropertyKey;
@end
