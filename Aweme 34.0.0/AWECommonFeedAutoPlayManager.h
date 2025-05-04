@interface AWECommonFeedAutoPlayManager : NSObject
@property (nonatomic) NSMapTable autoPlaySectionTable;
- (void)allResignActiveWithHandler:;
- (void)didResignActiveWithSection:withHandler:;
- (void)didBecomeActiveWithSection:withHandler:;
- (id)autoPlaySectionTable;
- (void)setAutoPlaySectionTable:;
- (void).cxx_destruct;
- (void)registerHandler:;
+ (BOOL)shouldAutoPlayHandlerExclude;
+ (id)shareInstance;
@end
