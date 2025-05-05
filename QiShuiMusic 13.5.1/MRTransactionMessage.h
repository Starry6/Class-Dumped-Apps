@interface MRTransactionMessage : MRProtocolMessage
@property (nonatomic) Q name;
@property (nonatomic) NSArray packets;
@property (nonatomic) MRPlayerPath playerPath;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)playerPath;
- (unsigned long long)name;
- (id)initWithContentItems:forPlayerPath:;
- (id)packets;
- (id)initWithName:packets:playerPath:;
- (id)initWithPlaybackQueue:forPlayerPath:;
@end
