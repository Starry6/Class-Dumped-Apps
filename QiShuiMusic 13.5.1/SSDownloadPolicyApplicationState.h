@interface SSDownloadPolicyApplicationState : NSObject
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) NSSet applicationStates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)applicationIdentifier;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (void)setApplicationIdentifier:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithApplicationIdentifier:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addApplicationState:;
- (void)setNotRunningApplicationStates;
- (id)applicationStates;
- (void)setApplicationStates:;
+ (BOOL)supportsSecureCoding;
@end
