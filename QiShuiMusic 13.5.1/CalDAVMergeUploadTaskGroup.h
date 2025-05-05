@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup
@property (nonatomic) CalDAVBulkUploadTaskGroup uploadTaskGroup;
@property (nonatomic) <CalDAVCalendar> calendar;
@property (nonatomic) <CalDAVPrincipal> principal;
@property (nonatomic) BOOL shouldTrySyncTokenForBulkUpload;
- (void)setCalendar:;
- (void)startTaskGroup;
- (id)calendar;
- (void)dealloc;
- (void)setPrincipal:;
- (id)dataContentType;
- (id)principal;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (id)initWithCalendar:principal:accountInfoProvider:taskManager:;
- (void)_performBulkUpload;
- (void)_performRegularUpload;
- (id)uploadTaskGroup;
- (void)setUploadTaskGroup:;
- (BOOL)shouldTrySyncTokenForBulkUpload;
- (void)setShouldTrySyncTokenForBulkUpload:;
@end
