@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
@property (nonatomic) NSInteger state;
@property (nonatomic) NSMutableArray nestedGroupPrincipalURLs;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (void)setState:;
- (int)state;
- (void).cxx_destruct;
- (void)taskGroup:didFinishWithError:;
- (void)_finishWithError:state:;
- (id)initWithAccountInfoProvider:principalURL:taskManager:;
- (void)_expandProperties;
- (void)_getGroupMembershipForURL:state:;
- (void)_getChildProperties;
- (id)nestedGroupPrincipalURLs;
- (void)setNestedGroupPrincipalURLs:;
@end
