@interface IESIMPOIItemAnchorInfo : MTLModel
@property (nonatomic) IESIMPOIItemAnchorTag suffix;
@property (nonatomic) NSArray minorTags;
@property (nonatomic) q minorTagExtendTime;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) IESIMURLModel serviceIconURL;
@property (nonatomic) NSString typeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)minorTagExtendTime;
- (id)minorTags;
- (id)serviceIconURL;
- (void)setMinorTagExtendTime:;
- (void)setMinorTags:;
- (void)setServiceIconURL:;
- (void)setIconURL:;
- (id)typeName;
- (id)init;
- (void)setTypeName:;
- (id)suffix;
- (void).cxx_destruct;
- (void)setSuffix:;
- (id)iconURL;
+ (id)minorTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
