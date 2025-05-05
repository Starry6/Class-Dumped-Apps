@interface IESPolicyCleanCommandModel : MTLModel
@property (nonatomic) NSString resourceType;
@property (nonatomic) NSString panel;
@property (nonatomic) NSString strategy;
@property (nonatomic) NSString timeThreshold;
@property (nonatomic) NSArray deleteKeys;
@property (nonatomic) NSArray allowKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allowKeys;
- (id)deleteKeys;
- (void)setAllowKeys:;
- (void)setDeleteKeys:;
- (void)setTimeThreshold:;
- (id)timeThreshold;
- (id)strategy;
- (id)resourceType;
- (void)setResourceType:;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)panel;
- (void)setPanel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
