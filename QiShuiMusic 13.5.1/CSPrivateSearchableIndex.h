@interface CSPrivateSearchableIndex : CSSearchableIndex
@property (nonatomic) BOOL attemptedIndexPathResolution;
@property (nonatomic) NSString resolvedIndexPath;
@property (nonatomic) NSInteger resolvedIndexPathErrorCode;
@property (nonatomic) NSString indexPath;
@property (nonatomic) CSIndexConnection savedConnection;
- (BOOL)attemptedIndexPathResolution;
- (void)dealloc;
- (int)resolvedIndexPathErrorCode;
- (void)setIndexPath:;
- (void)setResolvedIndexPath:;
- (void)setAttemptedIndexPathResolution:;
- (void)setSavedConnection:;
- (id)savedConnection;
- (id)connection;
- (void).cxx_destruct;
- (void)setResolvedIndexPathErrorCode:;
- (id)initWithPath:;
- (id)xpc_dictionary_for_command:requiresInitialization:;
- (id)indexPath;
- (id)resolvedIndexPath;
+ (id)defaultSearchableIndex;
@end
