@interface SASportsMetadataGroup : AceObject
@property (nonatomic) NSString groupTitle;
@property (nonatomic) NSArray metadata;
@property (nonatomic) NSNumber selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selected;
- (id)groupIdentifier;
- (id)metadata;
- (void)setSelected:;
- (void)setGroupTitle:;
- (void)setMetadata:;
- (id)encodedClassName;
- (id)groupTitle;
+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:context:;
@end
