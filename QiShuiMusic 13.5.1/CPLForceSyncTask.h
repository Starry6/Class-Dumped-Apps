@interface CPLForceSyncTask : NSObject
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) NSArray scopeIdentifiers;
@property (nonatomic) BOOL cancelled;
- (id)taskIdentifier;
- (BOOL)isCancelled;
- (void).cxx_destruct;
- (id)description;
- (void)setTaskIdentifier:;
- (void)cancelTask;
- (void)launchTask;
- (id)initWithScopeIdentifiers:;
- (id)scopeIdentifiers;
@end
