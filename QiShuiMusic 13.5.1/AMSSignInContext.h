@interface AMSSignInContext : NSObject
@property (nonatomic) BOOL canMakeAccountActive;
@property (nonatomic) NSString debugReason;
@property (nonatomic) BOOL ignoreAccountConversion;
@property (nonatomic) BOOL skipAuthentication;
@property (nonatomic) NSString hashedDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)hashedDescription;
- (void).cxx_destruct;
- (BOOL)canMakeAccountActive;
- (void)setCanMakeAccountActive:;
- (id)debugReason;
- (void)setDebugReason:;
- (BOOL)ignoreAccountConversion;
- (void)setIgnoreAccountConversion:;
- (BOOL)skipAuthentication;
- (void)setSkipAuthentication:;
@end
