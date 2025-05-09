@interface CTCellularPlanProfile : NSObject
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isBootstrap;
@property (nonatomic) BOOL isDisableNotAllowed;
@property (nonatomic) BOOL isDeleteNotAllowed;
@property (nonatomic) BOOL requiresUserConsent;
@property (nonatomic) NSData profileId;
@property (nonatomic) NSString iccid;
- (BOOL)isBootstrap;
- (id)redactedDescription;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setIsSelected:;
- (id)copyWithZone:;
- (id)iccid;
- (void)setIccid:;
- (id)profileId;
- (void)setProfileId:;
- (BOOL)requiresUserConsent;
- (void)setRequiresUserConsent:;
- (BOOL)isDisableNotAllowed;
- (BOOL)isDeleteNotAllowed;
- (id)initWithProfileId:iccid:selected:bootstrap:disableNotAllowed:deleteNotAllowed:requiresUserConsent:;
- (void)setIsBootstrap:;
- (void)setIsDisableNotAllowed:;
- (void)setIsDeleteNotAllowed:;
+ (BOOL)supportsSecureCoding;
@end
