@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate
@property (nonatomic) CPLChangeBatch scopesChangeBatch;
- (id)statusDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)applyToStore:error:;
- (id)storageForStatusInStore:;
- (void).cxx_destruct;
- (BOOL)discardFromStore:error:;
- (id)initWithStore:scopesChangeBatch:;
- (id)scopesChangeBatch;
+ (BOOL)supportsSecureCoding;
@end
