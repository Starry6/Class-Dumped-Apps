@interface CKContextDonation : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) CKContextUserActivity associatedUserActivity;
@property (nonatomic) Q remoteProcesses;
@property (nonatomic) Q nonce;
@property (nonatomic) NSString donorBundleIdentifier;
- (void)addItem:;
- (id)items;
- (unsigned long long)nonce;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setNonce:;
- (id)initWithDonorBundleIdentifier:;
- (void)donate;
- (void)setAssociatedUserActivity:;
- (void)setRemoteProcesses:;
- (unsigned long long)remoteProcesses;
- (id)initWithDonations:donorBundleIdentifier:;
- (id)concatenatedRequestsText;
- (id)concatenatedRequestsDebugText;
- (id)_concatenatedRequestTextUsingDebugText:;
- (id)associatedUserActivity;
- (id)donorBundleIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)establishServiceConnection;
@end
