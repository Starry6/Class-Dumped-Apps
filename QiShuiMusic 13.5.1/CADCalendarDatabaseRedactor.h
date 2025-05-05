@interface CADCalendarDatabaseRedactor : NSObject
@property (nonatomic) NSURL path;
- (id)path;
- (void)setPath:;
- (void).cxx_destruct;
- (BOOL)redact;
- (id)initWithPath:context:;
- (BOOL)_redactOmatic:;
- (BOOL)_specialRedactions:;
@end
