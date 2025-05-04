@interface AWEOpenAuthInfoResponse : AWEBaseApiModel
@property (nonatomic) AWEOpenAuthInfoDetail detailModel;
- (id)detailModel;
- (void)setDetailModel:;
- (void).cxx_destruct;
+ (id)detailModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
