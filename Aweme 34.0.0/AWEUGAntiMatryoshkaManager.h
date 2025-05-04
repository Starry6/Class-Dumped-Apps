@interface AWEUGAntiMatryoshkaManager : NSObject
@property (nonatomic) AWEUGAntiMatryoshkaConfigModel configModel;
- (id)configModel;
- (void)setConfigModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
