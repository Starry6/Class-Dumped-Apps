@interface CalDAVOperation : CoreDAVTaskGroup
@property (nonatomic) <CalDAVPrincipal> principal;
@property (nonatomic) NSMutableSet outstandingTaskGroups;
- (id)init;
- (void)dealloc;
- (void)setPrincipal:;
- (id)principal;
- (void).cxx_destruct;
- (id)initWithPrincipal:;
- (void)bailWithError:;
- (void)cancelTaskGroup;
- (void)_tearDownAllTaskGroupsWithBlock:;
- (id)outstandingTaskGroups;
- (void)setOutstandingTaskGroups:;
@end
