@interface PBResponseMetadata : NSObject
@property (nonatomic) Q authorizationMachAbsoluteStartTime;
@property (nonatomic) Q authorizationMachAbsoluteEndTime;
@property (nonatomic) BOOL authorizationAdmonished;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)authorizationMachAbsoluteStartTime;
- (unsigned long long)authorizationMachAbsoluteEndTime;
- (id)initWithAuthorizationStartTime:authorizationEndTime:authorizationAdmonished:;
- (BOOL)isAuthorizationAdmonished;
+ (BOOL)supportsSecureCoding;
@end
