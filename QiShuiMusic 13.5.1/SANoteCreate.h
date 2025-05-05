@interface SANoteCreate : SADomainCommand
@property (nonatomic) NSString contents;
- (id)groupIdentifier;
- (id)contents;
- (BOOL)requiresResponse;
- (void)setContents:;
- (id)encodedClassName;
+ (id)create;
+ (id)createWithDictionary:context:;
@end
