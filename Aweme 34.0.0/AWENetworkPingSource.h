@interface AWENetworkPingSource : NSObject
@property (nonatomic) NSString hostName;
@property (nonatomic) Q port;
- (id)initWithHostName:port:;
- (void)setPort:;
- (unsigned long long)port;
- (void).cxx_destruct;
- (id)hostName;
- (void)setHostName:;
@end
