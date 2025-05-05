@interface SAAddResultObjects : SABaseClientBoundCommand
@property (nonatomic) NSArray objects;
@property (nonatomic) NSArray resultObjects;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setObjects:;
- (id)objects;
- (id)encodedClassName;
- (id)resultObjects;
- (void)setResultObjects:;
+ (id)addResultObjects;
+ (id)addResultObjectsWithDictionary:context:;
@end
