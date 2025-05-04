@interface AWESearchLiveRecommdResponceModel : AWEBaseApiModel
@property (nonatomic) NSArray data;
@property (nonatomic) NewIESLiveFeedExtraModel extra;
@property (nonatomic) NSNumber statuscode;
@property (nonatomic) AWESearchNilInfoModel searchNilInfoModel;
@property (nonatomic) AWESearchNilTextModel searchNilTextModel;
- (void)setExtra:;
- (id)searchNilInfoModel;
- (void)setSearchNilInfoModel:;
- (id)searchNilTextModel;
- (void)setSearchNilTextModel:;
- (id)statuscode;
- (void)setStatuscode:;
- (id)extra;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)extraJSONTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
