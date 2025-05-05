@interface CalDAVPostAuditFailureTask : CoreDAVPostTask
- (id)initWithResourceURL:reason:;
+ (id)_stringForReason:;
@end
