@interface SANoteUpdate : SADomainCommand
@property (nonatomic) NSString contentsToAppend;
@property (nonatomic) NSURL identifier;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
- (id)contentsToAppend;
- (void)setContentsToAppend:;
+ (id)update;
+ (id)updateWithDictionary:context:;
@end
