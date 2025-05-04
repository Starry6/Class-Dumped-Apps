@interface AWERefreshRetrievePluginController : NSObject
@property (nonatomic) <AWEHPChannelControllerProtocol> controller;
@property (nonatomic) NSString lastRefreshUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)channelRefreshWithModel:completion:;
- (void)setLastRefreshUserID:;
- (BOOL)canRefreshRetrieve:;
- (id)lastRefreshUserID;
- (void)setController:;
- (void).cxx_destruct;
- (id)initWithController:;
- (id)controller;
+ (BOOL)channelAllowInjectToController:;
@end
