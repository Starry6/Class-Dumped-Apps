@interface CTCellularPlan : NSObject
@property (nonatomic) CTCellularPlanProfile profile;
@property (nonatomic) CTCellularPlanSubscription subscription;
@property (nonatomic) NSNumber subscriptionStatusOverride;
@property (nonatomic) BOOL isHomePlan;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) BOOL requiresUserConsent;
@property (nonatomic) NSData profileId;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSString iccid;
@property (nonatomic) BOOL autoRenew;
@property (nonatomic) double timestamp;
@property (nonatomic) double billingStartDate;
@property (nonatomic) double billingEndDate;
@property (nonatomic) NSString carrierName;
@property (nonatomic) NSInteger planType;
@property (nonatomic) NSString planDescription;
@property (nonatomic) NSInteger planStatus;
@property (nonatomic) NSInteger accountStatus;
@property (nonatomic) NSString accountURL;
@property (nonatomic) BOOL isDisableNotAllowed;
@property (nonatomic) BOOL isDeleteNotAllowed;
@property (nonatomic) NSArray dataUsage;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL isSelectable;
- (id)subscription;
- (id)init;
- (id)phoneNumber;
- (void)setSubscription:;
- (id)statusAsString:;
- (void)setPhoneNumber:;
- (id)redactedDescription;
- (void)setProfile:;
- (id)initWithCoder:;
- (id)profile;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (int)accountStatus;
- (id)carrierName;
- (void).cxx_destruct;
- (id)dataUsage;
- (BOOL)isSelectable;
- (double)timestamp;
- (id)description;
- (int)status;
- (id)copyWithZone:;
- (id)iccid;
- (int)planStatus;
- (int)planType;
- (id)profileId;
- (BOOL)requiresUserConsent;
- (void)setRequiresUserConsent:;
- (id)accountURL;
- (id)initWithProfile:subscription:;
- (long long)planDescriptionCompare:;
- (BOOL)autoRenew;
- (double)billingStartDate;
- (double)billingEndDate;
- (id)planDescription;
- (BOOL)isDisableNotAllowed;
- (BOOL)isDeleteNotAllowed;
- (BOOL)isHomePlan;
- (void)setIsHomePlan:;
- (id)subscriptionStatusOverride;
- (void)setSubscriptionStatusOverride:;
+ (BOOL)supportsSecureCoding;
@end
