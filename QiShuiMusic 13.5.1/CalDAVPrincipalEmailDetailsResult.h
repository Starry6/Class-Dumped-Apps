@interface CalDAVPrincipalEmailDetailsResult : NSObject
@property (nonatomic) NSURL principalURL;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSSet preferredAddresses;
- (id)principalURL;
- (void)setDisplayName:;
- (id)displayName;
- (void).cxx_destruct;
- (id)description;
- (id)addresses;
- (void)setPrincipalURL:;
- (id)preferredAddresses;
- (void)setPreferredAddresses:;
+ (id)resultFromResponseItem:;
@end
