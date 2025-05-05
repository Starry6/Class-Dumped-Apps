@interface IESAdLandingChannelInterceptor : NSObject
@property (nonatomic) NSString gurdAccessKey;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString channelQueryKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelQueryKey;
- (id)adLandingChannelForURLRequest:;
- (id)falconMetaDataForURLRequest:;
- (id)gurdAccessKey;
- (id)initWithGurdAccessKey:;
- (void)setChannelQueryKey:;
- (void)setGurdAccessKey:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:;
@end
