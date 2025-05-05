@interface AnimaXContext : NSObject
@property (nonatomic) NSHashTable animationListeners;
@property (nonatomic) NSLock animationListenersLock;
@property (nonatomic) AnimaXBaseAbility ability;
@property (nonatomic) BOOL lynxLynxMode;
@property (nonatomic) NSString lynxTemplateUrl;
@property (nonatomic) ^v lynxResourceFetcher;
- (id)lynxTemplateUrl;
- (id)ability;
- (void)addAnimationListener:;
- (id)animationListeners;
- (id)animationListenersLock;
- (id)initWithAbility:;
- (BOOL)lynxLynxMode;
- (id)lynxResourceFetcher;
- (void)removeAnimationListener:;
- (void)setAbility:;
- (void)setAnimationListeners:;
- (void)setAnimationListenersLock:;
- (void)setLynxLynxMode:;
- (void)setLynxResourceFetcher:;
- (void)setLynxTemplateUrl:;
- (void).cxx_destruct;
- (id)allListeners;
+ (id)contextWithDefaultAbility;
@end
