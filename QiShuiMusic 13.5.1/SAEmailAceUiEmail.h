@interface SAEmailAceUiEmail : SAEmailEmail
@property (nonatomic) NSNumber read;
- (id)groupIdentifier;
- (id)read;
- (id)encodedClassName;
- (void)setRead:;
+ (id)aceUiEmail;
+ (id)aceUiEmailWithDictionary:context:;
@end
