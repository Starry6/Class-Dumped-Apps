@interface SAUIRepeatIt : SABaseClientBoundCommand
@property (nonatomic) NSString contingency;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)contingency;
- (void)setContingency:;
+ (id)repeatIt;
+ (id)repeatItWithDictionary:context:;
@end
