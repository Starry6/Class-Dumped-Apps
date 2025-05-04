@interface AWELocalLifeAnchorModel : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString referString;
@property (nonatomic) <AWEPOIPlayInteractionVCManagerProtocol> playerManager;
@property (nonatomic) q scene;
@property (nonatomic) NSDictionary logExtra;
- (id)referString;
- (id)aweme;
- (id)logExtra;
- (id)playerManager;
- (long long)scene;
- (id)initWithBuilder:;
- (void).cxx_destruct;
+ (id)builderWithAweme:referString:;
+ (id)builder;
@end
