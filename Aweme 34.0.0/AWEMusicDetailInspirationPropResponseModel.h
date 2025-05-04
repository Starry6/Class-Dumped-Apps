@interface AWEMusicDetailInspirationPropResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber status;
@property (nonatomic) AWEMusicDetailInspirationPropBodyModel propBodyModel;
- (id)propBodyModel;
- (void)setPropBodyModel:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
+ (id)propBodyModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
