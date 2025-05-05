@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer
- (void)dealloc;
- (id)initWithOptions:managedObjectContext:;
- (id)instantiateNewAnalyzerContextForChangesInStore:;
- (BOOL)processTransaction:withContext:error:;
+ (BOOL)isPrivateTransaction:;
+ (BOOL)isPrivateTransactionAuthor:;
+ (BOOL)isPrivateContextName:;
@end
