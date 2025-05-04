@interface AWEDCFeedAutoPlayManager : NSObject
@property (nonatomic) NSMapTable autoPlayCardTable;
- (void)didResignActiveWithCard:withHandler:;
- (void)allResignNoActiveWithCard:withHandler:;
- (void)didBecomeActiveWithCard:withHandler:;
- (void)resetVideoViewWithAweme:;
- (id)autoPlayCardTable;
- (void)allResignActiveWithHandler:;
- (void)setAutoPlayCardTable:;
- (id)className;
- (void).cxx_destruct;
- (void)registerHandler:;
+ (id)shareInstance;
@end
