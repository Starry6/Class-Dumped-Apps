@interface SABaseCommand : AceObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)baseCommand;
+ (id)baseCommandWithDictionary:context:;
@end
