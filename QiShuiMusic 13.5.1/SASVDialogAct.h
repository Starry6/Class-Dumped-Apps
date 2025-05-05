@interface SASVDialogAct : AceObject
@property (nonatomic) NSString name;
@property (nonatomic) SASVDialogNode parametersRoot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)name;
- (id)parametersRoot;
- (void)setParametersRoot:;
+ (id)dialogAct;
+ (id)dialogActWithDictionary:context:;
@end
