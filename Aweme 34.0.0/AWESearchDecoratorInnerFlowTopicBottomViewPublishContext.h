@interface AWESearchDecoratorInnerFlowTopicBottomViewPublishContext : NSObject
@property (nonatomic) AWESearchHotSpotConfigModel topicPublishModel;
@property (nonatomic) <AWESearchTopicPublishInnerFlowFunctionHandlerProtocol> topicPublishFunctionHandler;
@property (nonatomic) AWEButtonStyleConfigParams buttonStyleConfigParams;
- (id)topicPublishModel;
- (id)topicPublishFunctionHandler;
- (id)buttonStyleConfigParams;
- (void)setTopicPublishModel:;
- (void)setTopicPublishFunctionHandler:;
- (void)setButtonStyleConfigParams:;
- (void).cxx_destruct;
+ (id)topicTitelStringForText:;
+ (id)joinNumberStringForNumber:;
+ (id)publishButtonTextForConfigModel:withAwemeModel:buttonStyleConfigParams:;
+ (BOOL)shouldUseConfigModelCameraSetting:withAwemeModel:;
@end
