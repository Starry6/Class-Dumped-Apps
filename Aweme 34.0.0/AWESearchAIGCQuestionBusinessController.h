@interface AWESearchAIGCQuestionBusinessController : NSObject
@property (nonatomic) NSString rotateTosid;
@property (nonatomic) <AWESearchAIGCQuestionBusinessControllerDelegate> delegate;
- (id)cachalotView;
- (void)searchAICardSwitchQuestionToIndex:;
- (void)aiCardSwitchQuestionWithParams:;
- (id)currentSearchID;
- (id)roundInfoManager;
- (void)reloadBubbleViewWithViewModel:questionIndex:;
- (BOOL)sendEventToAIMessageCardWithEvent:params:;
- (BOOL)updateStatusWithCmdModel:;
- (id)fetchAllBubbleNodes;
- (void)reloadBubbleViewWithViewModel:imageModel:boxArray:questionIndex:;
- (id)subQuestionDataController;
- (void)setRotateTosid:;
- (void)updateBubbleViewWithViewModel:imageModel:boxArray:questionIndex:;
- (void)reloadBubbleViewWithViewModel:boxArray:questionIndex:;
- (void)reloadBubbleViewWithViewModel:completionBlock:;
- (BOOL)handleWithCmdModel:;
- (void)updateBubbleViewModel:withCmdModel:;
- (id)rotateTosid;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)getBoundingBoxWithCmdModel:;
+ (id)getImageModelWithCmdModel:;
@end
