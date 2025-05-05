@interface CLSAuthTree : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithOverridingStatus:;
- (id)initWithStatus:statusID:identifier:;
- (void)setAuthStatus:forIdentifier:statusID:parentStatusID:;
- (long long)authStatusAtIdentifierPath:;
- (long long)authStatusFor:;
- (void)_addNode:parentStatusID:;
+ (BOOL)supportsSecureCoding;
@end
