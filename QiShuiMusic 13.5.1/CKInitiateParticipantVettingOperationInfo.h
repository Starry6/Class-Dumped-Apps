@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo
@property (nonatomic) CKShareMetadata shareMetadata;
@property (nonatomic) NSString participantID;
@property (nonatomic) NSString address;
- (void)setAddress:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)address;
- (id)participantID;
- (id)shareMetadata;
- (void)setParticipantID:;
- (void)setShareMetadata:;
+ (BOOL)supportsSecureCoding;
@end
