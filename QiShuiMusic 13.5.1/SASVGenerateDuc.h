@interface SASVGenerateDuc : AceObject
@property (nonatomic) NSString ducFamilyId;
@property (nonatomic) NSString ducId;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)parameters;
- (id)encodedClassName;
- (void)setParameters:;
- (id)ducFamilyId;
- (void)setDucFamilyId:;
- (id)ducId;
- (void)setDucId:;
+ (id)generateDuc;
+ (id)generateDucWithDictionary:context:;
@end
