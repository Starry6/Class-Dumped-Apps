@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo
@property (nonatomic) NSArray userIdentityLookupInfos;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)userIdentityLookupInfos;
- (void)setUserIdentityLookupInfos:;
+ (BOOL)supportsSecureCoding;
@end
