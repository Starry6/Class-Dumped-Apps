@interface CATIDSServiceConnectionInvitationRequest : NSObject
@property (nonatomic) NSUUID invitationIdentifier;
@property (nonatomic) NSString appleID;
@property (nonatomic) <CATCancelable> assertion;
@property (nonatomic) NSDictionary userInfo;
- (id)assertion;
- (id)appleID;
- (id)userInfo;
- (void).cxx_destruct;
- (id)invitationIdentifier;
- (id)initWithInvitationIdentifier:appleID:assertion:userInfo:;
@end
