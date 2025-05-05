@interface AnnieAsrStateChange : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSNumber isConnected;
@property (nonatomic) NSString textMsg;
- (id)textMsg;
- (void)setTextMsg:;
- (void)setType:;
- (void)setIsConnected:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)isConnected;
@end
