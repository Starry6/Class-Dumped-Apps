@interface OSLogEntryBoundary : OSLogEntry
- (id)initWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
