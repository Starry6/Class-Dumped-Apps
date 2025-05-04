@interface AWELocalLifeAnchorBuilder : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSString referString;
@property (nonatomic) <AWEPOIPlayInteractionVCManagerProtocol> playerManager;
@property (nonatomic) q scene;
- (id)referString;
- (id)aweme;
- (id)logExtra;
- (id)playerManager;
- (id)setScene;
- (id)setPlayerManager;
- (id)setLogExtra;
- (id)setAweme;
- (id)setReferString;
- (id)init;
- (long long)scene;
- (void).cxx_destruct;
@end
