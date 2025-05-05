@interface IESECGoodsDetailSchemaMergeParamModel : IESLiveBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) IESECGoodsDetailSchemaMergeMergeParamsModel mergeParams;
@property (nonatomic) BOOL avoidOpen;
@property (nonatomic) NSString btm;
@property (nonatomic) NSDictionary bcmParams;
- (id)btm;
- (void)setBtm:;
- (void)setMergeParams:;
- (BOOL)avoidOpen;
- (id)bcmParams;
- (id)mergeParams;
- (void)setAvoidOpen:;
- (void)setBcmParams:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
