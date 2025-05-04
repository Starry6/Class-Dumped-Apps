@interface AWEBatManOnQueueNotifyContext : NSObject
@property (nonatomic) @? playBlock;
@property (nonatomic) @? ignoreNotifyBlock;
@property (nonatomic) AWEBatManModel batManModel;
- (id)playBlock;
- (void)setPlayBlock:;
- (id)batManModel;
- (void)setBatManModel:;
- (id)ignoreNotifyBlock;
- (void)setIgnoreNotifyBlock:;
- (void).cxx_destruct;
@end
