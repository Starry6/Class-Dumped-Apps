@interface AWEMVChannelAutoPlayManager : NSObject
@property (nonatomic) NSMapTable autoPlayCardTable;
- (void)didResignActiveWithCard:withHandler:;
- (void)didBecomeActiveWithCard:withHandler:;
- (id)autoPlayCardTable;
- (void)allResignActiveWithHandler:;
- (void)setAutoPlayCardTable:;
- (void).cxx_destruct;
- (void)registerHandler:;
+ (id)shareInstance;
@end
