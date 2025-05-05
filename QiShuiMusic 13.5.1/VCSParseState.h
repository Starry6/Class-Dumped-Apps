@interface VCSParseState : NSObject
@property (nonatomic) Q context;
@property (nonatomic) q version;
@property (nonatomic) NSInteger lineNumber;
@property (nonatomic) BOOL palmImport;
@property (nonatomic) Q status;
@property (nonatomic) VCSCalendar currentCalendar;
@property (nonatomic) VCSEntity currentEntity;
@property (nonatomic) NSMutableArray calendars;
- (void)setStatus:;
- (id)init;
- (unsigned long long)context;
- (void)setVersion:;
- (long long)version;
- (void)setCurrentCalendar:;
- (void)setLineNumber:;
- (id)calendars;
- (void).cxx_destruct;
- (int)lineNumber;
- (unsigned long long)status;
- (id)currentCalendar;
- (void)setContext:;
- (void)setCalendars:;
- (void)setVersionMaj:andMin:;
- (BOOL)palmImport;
- (void)setPalmImport:;
- (id)currentEntity;
- (void)setCurrentEntity:;
@end
