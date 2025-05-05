@interface SASmsDraftShow : SADomainCommand
@property (nonatomic) NSURL smsIdentifier;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)smsIdentifier;
- (void)setSmsIdentifier:;
+ (id)draftShow;
+ (id)draftShowWithDictionary:context:;
@end
