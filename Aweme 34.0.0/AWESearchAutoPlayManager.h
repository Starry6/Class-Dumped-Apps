@interface AWESearchAutoPlayManager : NSObject
@property (nonatomic) NSMapTable autoPlayCardTable;
@property (nonatomic) BOOL disableCheckActiveBeforeResign;
- (void)didResignActiveWithCard:withHandler:;
- (void)didBecomeActiveWithCard:withHandler:;
- (id)autoPlayCardTable;
- (void)allResignActiveWithHandler:;
- (void)setAutoPlayCardTable:;
- (BOOL)disableCheckActiveBeforeResign;
- (void)setDisableCheckActiveBeforeResign:;
- (void).cxx_destruct;
- (void)registerHandler:;
+ (BOOL)shouldAutoPlayHandlerExclude;
+ (id)shareInstance;
@end
