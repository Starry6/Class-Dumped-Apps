@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray shareMetadatasToAccept;
- (long long)databaseScope;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)shareMetadatasToAccept;
- (void)setShareMetadatasToAccept:;
+ (BOOL)supportsSecureCoding;
@end
