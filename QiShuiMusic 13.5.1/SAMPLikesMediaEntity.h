@interface SAMPLikesMediaEntity : SABaseClientBoundCommand
@property (nonatomic) NSString influencedSharedUserId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)influencedSharedUserId;
- (void)setInfluencedSharedUserId:;
+ (id)likesMediaEntity;
+ (id)likesMediaEntityWithDictionary:context:;
@end
