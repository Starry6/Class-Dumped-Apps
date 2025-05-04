@interface AWESearchPhotoTemplatesItemModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString descriptionString;
@property (nonatomic) NSNumber useCount;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString effectID;
@property (nonatomic) q mvType;
- (long long)mvType;
- (void)setMvType:;
- (void)setEffectID:;
- (void)setIconURL:;
- (void)setDescriptionString:;
- (id)useCount;
- (void)setUseCount:;
- (id)iconURL;
- (id)descriptionString;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)effectID;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
