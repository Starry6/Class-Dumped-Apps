@interface IESAdSplashChannelInterceptor : NSObject
@property (nonatomic) NSString gurdAccessKey;
@property (nonatomic) @? getChannelBlock;
@property (nonatomic) IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> delegateDispatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getChannelBlock;
- (void)unregisterInterceptionDelegate:;
- (id)delegateDispatcher;
- (id)falconMetaDataForURLRequest:;
- (id)gurdAccessKey;
- (id)initWithGurdAccessKey:getChannelBlock:;
- (void)registerInterceptionDelegate:;
- (void)setDelegateDispatcher:;
- (void)setGetChannelBlock:;
- (void)setGurdAccessKey:;
- (id)init;
- (void).cxx_destruct;
@end
