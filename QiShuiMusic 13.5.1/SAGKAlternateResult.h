@interface SAGKAlternateResult : AceObject
@property (nonatomic) <SAClientBoundCommand> command;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (id)command;
- (id)encodedClassName;
- (id)name;
- (void)setCommand:;
+ (id)alternateResult;
+ (id)alternateResultWithDictionary:context:;
@end
