@interface CKFetchShareMetadataOperationInfo : CKOperationInfo
@property (nonatomic) NSArray shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (nonatomic) NSArray rootRecordDesiredKeys;
@property (nonatomic) NSDictionary shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rootRecordDesiredKeys;
- (void)setRootRecordDesiredKeys:;
- (BOOL)shouldFetchRootRecord;
- (void)setShouldFetchRootRecord:;
- (id)shareInvitationTokensByShareURL;
- (void)setShareInvitationTokensByShareURL:;
- (BOOL)overwriteContainerPCSServiceIfManatee;
- (void)setOverwriteContainerPCSServiceIfManatee:;
- (BOOL)skipShareDecryption;
- (void)setSkipShareDecryption:;
- (id)shareURLsToFetch;
- (void)setShareURLsToFetch:;
+ (BOOL)supportsSecureCoding;
@end
