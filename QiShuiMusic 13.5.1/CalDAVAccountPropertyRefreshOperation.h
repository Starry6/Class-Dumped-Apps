@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation
@property (nonatomic) <CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;
- (void)setFetchPrincipalSearchProperties:;
- (void)propFindTask:parsedResponses:error:;
- (BOOL)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:completedWithError:;
- (id)_copyHomePropertiesPropFindElements;
- (BOOL)shouldKeepDefaultAlarmError:;
- (id)propPatchForProperty:value:;
- (void)_refreshDefaultAlarms;
- (BOOL)shouldRefreshDefaultAlarms;
- (void).cxx_destruct;
- (id)initWithPrincipal:;
- (void)refreshProperties;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:;
- (void)_reallyRefreshProperties;
@end
