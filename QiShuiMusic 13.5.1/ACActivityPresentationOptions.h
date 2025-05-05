@interface ACActivityPresentationOptions : NSObject
@property (nonatomic) BOOL userDismissalAllowedOnLockScreen;
@property (nonatomic) BOOL showsAuthorizationOptions;
@property (nonatomic) NSArray destinations;
- (id)destinations;
- (id)initWithDestinations:;
- (BOOL)isUserDismissalAllowedOnLockScreen;
- (void).cxx_destruct;
- (void)setDestinations:;
- (id)_init;
- (id)copyWithZone:;
- (BOOL)showsAuthorizationOptions;
- (id)initFromSwift:;
- (void)setUserDismissalAllowedOnLockScreen:;
- (void)setShowsAuthorizationOptions:;
@end
