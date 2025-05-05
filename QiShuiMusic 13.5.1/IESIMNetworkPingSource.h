@interface IESIMNetworkPingSource : NSObject
@property (nonatomic) NSString hostName;
@property (nonatomic) Q port;
- (id)initWithHostName:port:;
- (unsigned long long)port;
- (void)setPort:;
- (void).cxx_destruct;
- (id)hostName;
- (void)setHostName:;
@end
