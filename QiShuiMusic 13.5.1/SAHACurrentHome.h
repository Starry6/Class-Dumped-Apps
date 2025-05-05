@interface SAHACurrentHome : AceObject
@property (nonatomic) NSString currentHomeIdentifier;
@property (nonatomic) NSString currentHomeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setCurrentHomeName:;
- (id)currentHomeIdentifier;
- (void)setCurrentHomeIdentifier:;
- (id)currentHomeName;
- (id)encodedClassName;
+ (id)currentHome;
+ (id)currentHomeWithDictionary:context:;
@end
