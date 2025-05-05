@interface CATIDSServiceConnectionInvitation : NSObject
@property (nonatomic) NSUUID connectionIdentifier;
@property (nonatomic) <CATCancelable> assertion;
@property (nonatomic) NSString senderAppleID;
@property (nonatomic) NSString senderAddress;
@property (nonatomic) Q messagingVersion;
@property (nonatomic) NSDictionary userInfo;
- (id)assertion;
- (id)userInfo;
- (id)connectionIdentifier;
- (void).cxx_destruct;
- (id)senderAddress;
- (unsigned long long)messagingVersion;
- (id)initWithSenderAppleID:senderAddress:assertion:messagingVersion:userInfo:;
- (id)initWithConnectionIdentifier:senderAppleID:senderAddress:assertion:messagingVersion:userInfo:;
- (id)senderAppleID;
@end
