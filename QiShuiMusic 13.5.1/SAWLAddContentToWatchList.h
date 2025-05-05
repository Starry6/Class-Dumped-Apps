@interface SAWLAddContentToWatchList : SABaseClientBoundCommand
@property (nonatomic) NSString canonicalId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)canonicalId;
- (void)setCanonicalId:;
+ (id)addContentToWatchList;
+ (id)addContentToWatchListWithDictionary:context:;
@end
