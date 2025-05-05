@interface IESLiveSaaSVerificationFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSVerificationStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (id)initWithRoom:trackContext:componentContext:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (void)messageReceived:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
