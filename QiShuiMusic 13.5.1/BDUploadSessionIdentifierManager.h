@interface BDUploadSessionIdentifierManager : NSObject
@property (nonatomic) NSDictionary completionDictionary;
@property (nonatomic) NSSet identifierSet;
@property (nonatomic) @? updateIdentifier;
- (BOOL)containsCompletionByidentifier:;
- (id)completionDictionary;
- (id)identifierSet;
- (void)runCompletionByIdentifier:;
- (void)setCompletion:identifier:;
- (void)setCompletionDictionary:;
- (void)setIdentifierSet:;
- (id)init;
- (void)addIdentifier:;
- (void)notify;
- (BOOL)containsIdentifier:;
- (void)wait;
- (void).cxx_destruct;
- (id)updateIdentifier;
- (void)setUpdateIdentifier:;
+ (id)shareInstance;
@end
