@interface AWEGeneralActivityLiveReserveResponse : AWEBaseApiModel
@property (nonatomic) AWEGeneralActivityLiveReserveResponseDataModel data;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
