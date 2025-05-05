@interface ICMusicLibraryAuthToken : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString deviceGUID;
@property (nonatomic) BOOL frozen;
@property (nonatomic) BOOL expired;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)token;
- (BOOL)isExpired;
- (void)setFrozen:;
- (void)setExpirationDate:;
- (id)deviceGUID;
- (id)initWithCoder:;
- (id)initWithBlock:;
- (BOOL)isFrozen;
- (id)expirationDate;
- (void)setToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setDeviceGUID:;
+ (BOOL)supportsSecureCoding;
@end
