@interface TMModule : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Timon timon;
@property (nonatomic) TMModuleConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithTimon:;
- (void)setTimon:;
- (id)timon;
- (void)updateWithConfig:;
- (void)start;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)moduleName;
- (void).cxx_destruct;
- (id)config;
- (BOOL)canStart;
- (id)getService;
@end
