@interface CoreDAVSRVLookupTask : CoreDAVTask
@property (nonatomic) NSString serviceString;
@property (nonatomic) NSArray fetchedRecords;
- (void)finishCoreDAVTaskWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceString:;
- (void)performCoreDAVTask;
- (void)_runOnCallbackThread:;
- (void)handleResolvedEndPoints:;
- (id)serviceString;
- (void)setServiceString:;
- (id)fetchedRecords;
- (void)setFetchedRecords:;
@end
