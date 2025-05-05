@interface VEAssetMattingInfo : NSObject
@property (nonatomic) BOOL isThisAssetUsedMatting;
@property (nonatomic) NSString mattingDetectResultPath;
- (BOOL)isThisAssetUsedMatting;
- (id)mattingDetectResultPath;
- (void)setIsThisAssetUsedMatting:;
- (void)setMattingDetectResultPath:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
