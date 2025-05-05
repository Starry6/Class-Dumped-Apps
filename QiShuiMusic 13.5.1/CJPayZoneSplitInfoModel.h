@interface CJPayZoneSplitInfoModel : JSONModel
@property (nonatomic) q zoneIndex;
@property (nonatomic) NSString zoneTitle;
@property (nonatomic) NSString combineZoneTitle;
@property (nonatomic) CJPaySubPayTypeInfoModel otherCardInfo;
@property (nonatomic) BOOL isShowCombineTitle;
- (id)combineZoneTitle;
- (BOOL)isShowCombineTitle;
- (id)otherCardInfo;
- (void)setCombineZoneTitle:;
- (void)setIsShowCombineTitle:;
- (void)setOtherCardInfo:;
- (void)setZoneIndex:;
- (void)setZoneTitle:;
- (long long)zoneIndex;
- (id)zoneTitle;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
