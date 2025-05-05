@interface SAMacFilesystemContext : SADomainObject
@property (nonatomic) NSArray targetEntities;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)targetEntities;
- (void)setTargetEntities:;
+ (id)filesystemContext;
+ (id)filesystemContextWithDictionary:context:;
@end
