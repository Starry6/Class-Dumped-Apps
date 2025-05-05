@interface IESIMNetworkFilter : NSObject
@property (nonatomic) IESIMNetworkFilterConfig config;
- (void)requestTTNetRequest:;
- (void)setupWithConfig:;
- (void)start;
- (void)setConfig:;
- (void)stop;
- (void).cxx_destruct;
- (id)config;
+ (id)shared;
@end
