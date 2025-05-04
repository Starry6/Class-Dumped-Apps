@interface AWEMemoriesPlayerComponentManager : NSObject
@property (nonatomic) <IESServiceProvider> context;
@property (nonatomic) NSArray components;
@property (nonatomic) AWEMemoriesPlayerContext playerContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)playerContext;
- (void)setPlayerContext:;
- (id)componentClasses;
- (void)setupWithMemoriesDataController:;
- (void)bindPlayerConfigManager:;
- (void)bindPlayerControlManager:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)components;
- (id)context;
@end
