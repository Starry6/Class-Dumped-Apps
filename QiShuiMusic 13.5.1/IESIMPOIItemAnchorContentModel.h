@interface IESIMPOIItemAnchorContentModel : MTLModel
@property (nonatomic) NSArray primaryTags;
@property (nonatomic) NSArray minorTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPrimaryTags:;
- (id)minorTags;
- (id)primaryTags;
- (void)setMinorTags:;
- (void).cxx_destruct;
+ (id)minorTagsJSONTransformer;
+ (id)primaryTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
