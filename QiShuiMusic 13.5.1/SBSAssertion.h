@interface SBSAssertion : NSObject
@property (nonatomic) NSString assertionName;
@property (nonatomic) NSString reason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)reason;
- (id)initWithAssertionName:reason:port:;
- (id)initWithAssertionName:reason:receiveRight:;
- (void).cxx_destruct;
- (id)assertionName;
- (void)invalidate;
@end
