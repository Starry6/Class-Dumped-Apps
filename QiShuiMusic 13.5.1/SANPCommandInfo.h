@interface SANPCommandInfo : AceObject
@property (nonatomic) NSArray registeredCommands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)registeredCommands;
- (void)setRegisteredCommands:;
+ (id)commandInfo;
+ (id)commandInfoWithDictionary:context:;
@end
