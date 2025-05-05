@interface SASyncDebugInfo : AceObject
@property (nonatomic) NSArray objectIds;
@property (nonatomic) SASyncAnchor syncAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSyncAnchor:;
- (id)syncAnchor;
- (id)encodedClassName;
- (id)objectIds;
- (void)setObjectIds:;
+ (id)debugInfo;
+ (id)debugInfoWithDictionary:context:;
@end
