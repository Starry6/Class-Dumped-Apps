@interface AWEPzScopeModel : MTLModel
@property (nonatomic) NSString domain;
@property (nonatomic) NSSet cTags;
@property (nonatomic) NSSet sTags;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSString componentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cTags;
- (id)sTags;
- (void)setSTags:;
- (void)setCTags:;
- (void)setDomain:;
- (id)componentType;
- (id)domain;
- (id)description;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setComponentID:;
- (id)componentID;
+ (id)scopeWithObject:;
+ (id)cTagsJSONTransformer;
+ (id)sTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
