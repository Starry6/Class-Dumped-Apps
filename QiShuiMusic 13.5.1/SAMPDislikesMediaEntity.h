@interface SAMPDislikesMediaEntity : SABaseClientBoundCommand
@property (nonatomic) NSString influencedUserSharedUserId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)influencedUserSharedUserId;
- (void)setInfluencedUserSharedUserId:;
+ (id)dislikesMediaEntity;
+ (id)dislikesMediaEntityWithDictionary:context:;
@end
