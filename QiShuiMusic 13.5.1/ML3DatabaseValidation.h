@interface ML3DatabaseValidation : NSObject
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) <ML3DatabaseValidationDelegate> delegate;
@property (nonatomic) @? completionHandler;
@property (nonatomic) BOOL truncateBeforeValidating;
- (void)setTruncateBeforeValidating:;
- (void)setDelegate:;
- (void)_logDatabasePathDirectoryAttributes;
- (void)setCompletionHandler:;
- (BOOL)truncateBeforeValidating;
- (void)runValidation;
- (BOOL)_validateLibraryDatabaseIfNecessary:withError:;
- (BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
- (BOOL)_performSchemaUpgradeWithLibrary:error:;
- (id)library;
- (id)delegate;
- (BOOL)_truncateDatabaseFileForLibrary:withError:;
- (void).cxx_destruct;
- (id)initWithLibrary:delegate:completion:;
- (BOOL)_performDatabasePreprocessingWithLibrary:error:;
- (id)completionHandler;
@end
