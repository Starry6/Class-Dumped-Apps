@interface MRTransactionDestination : NSObject
@property (nonatomic) Q name;
@property (nonatomic) MRPlayerPath playerPath;
- (void).cxx_destruct;
- (id)playerPath;
- (unsigned long long)name;
- (void)unpacketize:completion:;
- (id)initWithName:playerPath:;
- (void)packetsFromMessage:completion:;
@end
