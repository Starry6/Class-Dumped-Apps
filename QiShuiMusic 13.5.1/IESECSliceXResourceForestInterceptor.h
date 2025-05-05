@interface IESECSliceXResourceForestInterceptor : NSObject
@property (nonatomic) NSDictionary channelConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interceptorName;
- (id)channelConfigs;
- (void)didCreateRequest:;
- (void)registerInterceptionConfigForChannel:config:;
- (void)setChannelConfigs:;
- (id)init;
- (void).cxx_destruct;
@end
