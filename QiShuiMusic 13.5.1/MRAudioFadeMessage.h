@interface MRAudioFadeMessage : MRProtocolMessage
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) q fadeType;
- (unsigned long long)type;
- (id)playerPath;
- (long long)fadeType;
- (id)initWithPlayerPath:fadeType:;
@end
