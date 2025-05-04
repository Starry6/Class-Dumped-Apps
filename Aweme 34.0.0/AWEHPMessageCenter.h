@interface AWEHPMessageCenter : NSObject
@property (nonatomic) AWEHPMessageCenterConfig config;
@property (nonatomic) NSHashTable observers;
- (id)initWithConfig:observers:;
- (void)setupWithConfig:observers:;
- (void)setConfig:;
- (void)handleMessage:;
- (id)config;
- (id)observers;
- (void).cxx_destruct;
- (void)setObservers:;
@end
