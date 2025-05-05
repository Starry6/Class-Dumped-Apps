@interface IESPolicyCleanResourceListModel : MTLModel
@property (nonatomic) NSString resourceType;
@property (nonatomic) NSString panel;
@property (nonatomic) NSArray resources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resources;
- (void)setResources:;
- (id)resourceType;
- (void)setResourceType:;
- (void).cxx_destruct;
- (id)panel;
- (void)setPanel:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
