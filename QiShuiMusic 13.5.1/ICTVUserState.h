@interface ICTVUserState : NSObject
@property (nonatomic) BOOL activeWatchKitUser;
@property (nonatomic) BOOL frozen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFrozen:;
- (id)initWithCoder:;
- (id)initWithBlock:;
- (BOOL)isFrozen;
- (void)encodeWithCoder:;
- (BOOL)isActiveWatchKitUser;
- (id)description;
- (id)copyWithBlock:;
- (void)setActiveWatchKitUser:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
