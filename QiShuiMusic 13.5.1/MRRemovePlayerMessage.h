@interface MRRemovePlayerMessage : MRProtocolMessage
@property (nonatomic) MRPlayerPath playerPath;
- (id)initWithPlayerPath:;
- (unsigned long long)type;
- (id)playerPath;
@end
