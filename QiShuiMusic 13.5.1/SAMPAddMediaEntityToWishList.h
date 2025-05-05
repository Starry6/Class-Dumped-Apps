@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand
@property (nonatomic) NSString adamId;
- (id)adamId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setAdamId:;
+ (id)addMediaEntityToWishList;
+ (id)addMediaEntityToWishListWithDictionary:context:;
@end
