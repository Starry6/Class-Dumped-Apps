@interface AWEEffectUGCDataModel : MTLModel
@property (nonatomic) NSString ugcId;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString effectId;
@property (nonatomic) AWEEffectUGCDataFileUrlModel fileUrl;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ugcId;
- (void)setUgcId:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (id)fileUrl;
- (void)setFileUrl:;
- (id)effectId;
- (void)setEffectId:;
+ (id)fileUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
