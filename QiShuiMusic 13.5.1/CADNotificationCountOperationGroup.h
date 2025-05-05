@interface CADNotificationCountOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CADDatabaseGetNotificationCountExcludingUncheckedCalendars:expanded:reply:;
+ (BOOL)requiresEventAccess;
@end
