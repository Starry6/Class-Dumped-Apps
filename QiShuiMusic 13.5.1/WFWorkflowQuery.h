@interface WFWorkflowQuery : WFResultQuery
@property (nonatomic) Q location;
@property (nonatomic) NSString workflowType;
@property (nonatomic) NSString folderIdentifier;
@property (nonatomic) q resultsLimit;
@property (nonatomic) BOOL includeTombstonesAndConflicts;
- (void)setResultsLimit:;
- (id)initWithLocation:;
- (long long)resultsLimit;
- (BOOL)includeTombstonesAndConflicts;
- (id)initWithCoder:;
- (id)initWithCollectionIdentifier:;
- (unsigned long long)location;
- (id)initWithFolderIdentifier:;
- (id)initWithWorkflowType:;
- (void)encodeWithCoder:;
- (id)workflowType;
- (void).cxx_destruct;
- (id)folderIdentifier;
- (void)setIncludeTombstonesAndConflicts:;
+ (BOOL)supportsSecureCoding;
@end
