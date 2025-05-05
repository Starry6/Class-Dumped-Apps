@interface CADErrorOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CADDatabaseGetEventsWithErrorsPerSource:;
- (void)CADDatabaseGetErrorCount:;
+ (BOOL)requiresEventAccess;
@end
