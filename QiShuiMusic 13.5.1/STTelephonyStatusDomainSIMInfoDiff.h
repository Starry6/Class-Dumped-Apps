@interface STTelephonyStatusDomainSIMInfoDiff : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (id)diffByApplyingDiff:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)applyToMutableInfo:;
- (void).cxx_destruct;
- (id)infoByApplyingToInfo:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFromInfo:toInfo:;
@end
