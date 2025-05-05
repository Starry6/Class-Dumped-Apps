@interface VEAIMomentMaterialInfo : NSObject
@property (nonatomic) q materialId;
@property (nonatomic) VEAIMomentMetaInfo metaInfo;
@property (nonatomic) VEAIMomentContentInfo contentInfo;
- (void)setContentInfo:;
- (id)contentInfo;
- (void).cxx_destruct;
- (long long)materialId;
- (void)setMaterialId:;
- (id)metaInfo;
- (void)setMetaInfo:;
@end
