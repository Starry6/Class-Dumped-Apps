@interface SAMPEnableShuffle : SADomainCommand
@property (nonatomic) BOOL enable;
- (BOOL)enable;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setEnable:;
+ (id)enableShuffle;
+ (id)enableShuffleWithDictionary:context:;
@end
