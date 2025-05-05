@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
@property (nonatomic) NSInteger state;
@property (nonatomic) BOOL fetchPrincipalDetails;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (void)setState:;
- (int)state;
- (void)taskGroup:didFinishWithError:;
- (void)_finishWithError:state:;
- (id)initWithAccountInfoProvider:principalURL:taskManager:;
- (void)_getChildProperties;
- (void)_fetchOnlyHrefs;
- (id)_urlAppendingSegmentWithAllowWrite:;
- (void)_expandPropertiesWithAllowWrite:;
- (BOOL)fetchPrincipalDetails;
- (void)setFetchPrincipalDetails:;
@end
