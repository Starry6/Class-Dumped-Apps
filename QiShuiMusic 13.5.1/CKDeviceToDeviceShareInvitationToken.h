@interface CKDeviceToDeviceShareInvitationToken : NSObject
@property (nonatomic) NSData sharingInvitationData;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) NSString participantID;
- (id)shareURL;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)participantID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSharingInvitationData:shareURL:;
- (id)initWithSharingInvitationData:shareURL:participantID:;
- (id)sharingInvitationData;
+ (BOOL)supportsSecureCoding;
@end
