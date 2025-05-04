@interface AWEPOIItemAnchorTransformModel : MTLModel
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSArray tags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconURL:;
- (id)tags;
- (id)iconURL;
- (void)setTags:;
- (void).cxx_destruct;
+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
