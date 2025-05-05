@interface CXCallDirectoryStoreMigrationResult : NSObject
@property (nonatomic) q startingSchemaVersion;
@property (nonatomic) q endingSchemaVersion;
@property (nonatomic) BOOL requiresExtensionDisablement;
@property (nonatomic) BOOL requiresExtensionSynchronization;
- (long long)startingSchemaVersion;
- (void)setStartingSchemaVersion:;
- (long long)endingSchemaVersion;
- (void)setEndingSchemaVersion:;
- (BOOL)requiresExtensionDisablement;
- (void)setRequiresExtensionDisablement:;
- (BOOL)requiresExtensionSynchronization;
- (void)setRequiresExtensionSynchronization:;
@end
