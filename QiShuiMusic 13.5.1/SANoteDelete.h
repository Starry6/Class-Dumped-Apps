@interface SANoteDelete : SADomainCommand
@property (nonatomic) NSURL identifier;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
@end
