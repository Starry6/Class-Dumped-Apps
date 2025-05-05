@interface CADInternalOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CADInternalForceStatCollection:;
- (BOOL)_internalAccessGranted;
- (BOOL)accessGranted;
- (void)CADInternalSetNextConferenceLinkRenewalToNow:;
- (void)CADInternalRemoveConferenceLinkRenewalDate:;
+ (BOOL)requiresEventAccess;
@end
