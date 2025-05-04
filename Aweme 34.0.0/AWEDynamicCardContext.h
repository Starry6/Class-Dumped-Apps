@interface AWEDynamicCardContext : NSObject
@property (nonatomic) UIView<AWEPOIDynamicCardProtocol> dynamicCard;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIView feedContainer;
@property (nonatomic) q feedPosition;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> playerInteractionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setExtra:;
- (id)feedContainer;
- (void)setFeedContainer:;
- (id)dynamicCard;
- (void)setDynamicCard:;
- (long long)feedPosition;
- (void)setFeedPosition:;
- (id)playerInteractionContext;
- (void)setPlayerInteractionContext:;
- (id)extra;
- (void).cxx_destruct;
@end
