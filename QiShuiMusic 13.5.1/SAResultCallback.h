@interface SAResultCallback : AceObject
@property (nonatomic) q code;
@property (nonatomic) NSArray commandReferences;
@property (nonatomic) NSArray commands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (long long)code;
- (id)commands;
- (id)encodedClassName;
- (void)setCode:;
- (void)setCommands:;
- (id)commandReferences;
- (void)setCommandReferences:;
+ (id)resultCallback;
+ (id)resultCallbackWithDictionary:context:;
@end
