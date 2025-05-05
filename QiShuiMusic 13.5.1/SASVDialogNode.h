@interface SASVDialogNode : AceObject
@property (nonatomic) NSArray children;
@property (nonatomic) NSString nodeTypeHint;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)children;
- (void)setChildren:;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)nodeTypeHint;
- (void)setNodeTypeHint:;
+ (id)dialogNode;
+ (id)dialogNodeWithDictionary:context:;
@end
