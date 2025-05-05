@interface CalDatabaseIntegrityErrors : NSObject
@property (nonatomic) NSCountedSet errors;
@property (nonatomic) <CalCalendarDatabaseIntegrityErrorReportingDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)errors;
@end
