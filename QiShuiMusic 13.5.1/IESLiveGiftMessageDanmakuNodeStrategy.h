@interface IESLiveGiftMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy
@property (nonatomic) HTSLiveGiftMessage giftMessage;
@property (nonatomic) NSArray giftURLArray;
@property (nonatomic) HTSLiveGiftStruct giftModel;
- (void)AsyncBuildNode:;
- (void)setGiftMessage:;
- (id)buildNodeBasePart;
- (long long)buildingMode;
- (id)giftMessage;
- (id)giftModel;
- (id)giftURLArray;
- (void)setGiftModel:;
- (void)setGiftURLArray:;
- (void)setSelfAwarenessStyleForNode:;
- (BOOL)filter;
- (void).cxx_destruct;
- (id)buildNode;
@end
