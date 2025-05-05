@interface STStewieStatusDomainData : NSObject
@property (nonatomic) BOOL stewieActive;
@property (nonatomic) BOOL stewieConnected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isStewieActive;
- (id)dataByApplyingDiff:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (BOOL)isStewieConnected;
+ (BOOL)supportsSecureCoding;
@end
