@interface IESECGoodsDetailHeaderPendantConfigModel : IESECBaseApiModel
@property (nonatomic) BOOL hideFullMode;
@property (nonatomic) BOOL hideHalfMode;
- (BOOL)hideFullMode;
- (BOOL)hideHalfMode;
- (void)setHideFullMode:;
- (void)setHideHalfMode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
