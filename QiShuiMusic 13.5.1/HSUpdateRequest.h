@interface HSUpdateRequest : HSRequest
- (BOOL)isConcurrent;
- (double)timeoutInterval;
- (id)canonicalResponseForResponse:;
- (id)initWithDatabaseRevision:sessionID:connectionType:;
- (id)_bodyDataForDatabaseRevision:sessionID:;
+ (id)requestWithDatabaseRevision:sessionID:connectionType:;
@end
