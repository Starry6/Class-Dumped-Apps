@interface SAFmfLocation : SALocation
@property (nonatomic) NSNumber distance;
@property (nonatomic) SAPersonAttribute theFriend;
@property (nonatomic) SAPersonAttribute friend;
@property (nonatomic) NSNumber locationDate;
- (id)distance;
- (id)groupIdentifier;
- (void)setDistance:;
- (id)encodedClassName;
- (id)locationDate;
- (void)setLocationDate:;
- (id)theFriend;
- (void)setTheFriend:;
- (id)friend;
- (void)setFriend:;
+ (id)location;
+ (id)locationWithDictionary:context:;
@end
