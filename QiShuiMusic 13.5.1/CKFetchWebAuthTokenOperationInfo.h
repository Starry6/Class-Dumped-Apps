@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSString APIToken;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)APIToken;
- (void)setAPIToken:;
+ (BOOL)supportsSecureCoding;
@end
