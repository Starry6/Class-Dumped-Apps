@interface CADSpotlightOperationGroup : CADOperationGroup
- (BOOL)accessGranted;
- (void)CADPushItemsToSpotlight:reply:;
- (void)CADWaitForSpotlightUpdatesWithReply:;
- (id)_gatherAllCalendarItemUUIDsInDatbase:;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventAccess;
@end
