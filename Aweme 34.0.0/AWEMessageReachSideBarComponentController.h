@interface AWEMessageReachSideBarComponentController : NSObject
@property (nonatomic) <AWEMessageReachFrameConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canRequestMessageReachDataWithParamsModel:;
- (BOOL)canShowMessageReachDataWithParamsModel:componentModel:;
- (id)initWithConfig:;
- (id)config;
- (id)channelID;
- (void).cxx_destruct;
@end
