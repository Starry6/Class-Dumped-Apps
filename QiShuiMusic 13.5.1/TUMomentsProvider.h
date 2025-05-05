@interface TUMomentsProvider : NSObject
@property (nonatomic) q streamToken;
@property (nonatomic) NSString requesterID;
@property (nonatomic) NSDictionary remoteIDSDestinations;
@property (nonatomic) BOOL remoteMomentsAvailable;
- (BOOL)isEqualToProvider:;
- (void).cxx_destruct;
- (id)requesterID;
- (id)description;
- (id)initWithConversation:;
- (long long)streamToken;
- (id)initWithCall:;
- (id)remoteIDSDestinations;
- (BOOL)isRemoteMomentsAvailable;
@end
