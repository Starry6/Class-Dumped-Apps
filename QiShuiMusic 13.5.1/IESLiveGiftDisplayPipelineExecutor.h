@interface IESLiveGiftDisplayPipelineExecutor : NSObject
@property (nonatomic) NSMutableArray handlers;
@property (nonatomic) <IESLiveGiftDisplayPiplineContext> contextHolder;
- (BOOL)checkGift:withHandler:;
- (id)contextHolder;
- (BOOL)enableDisplayWithGift:;
- (void)setContextHolder:;
- (id)handlers;
- (void)setHandlers:;
- (id)init;
- (void)addHandler:;
- (void).cxx_destruct;
@end
