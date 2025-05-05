@interface CADCalendarToolOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)accessGranted;
- (void)CADPurgeChangeTrackingReply:;
- (void)CADPostSyntheticRouteHypothesis:forEventWithExternalURL:reply:;
+ (BOOL)requiresEventAccess;
@end
