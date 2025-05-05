@interface CKGenericTemplateAuthor : MTLModel
@property (nonatomic) CKGenericTemplateUrlModel urlModel;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urlModel;
- (id)uid;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
