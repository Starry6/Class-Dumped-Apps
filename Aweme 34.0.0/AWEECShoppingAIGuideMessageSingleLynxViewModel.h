@interface AWEECShoppingAIGuideMessageSingleLynxViewModel : AWEECShoppingAIGuideMessageSingleViewModel
@property (nonatomic) double actuallyHeight;
@property (nonatomic) NSString lynxCardID;
- (id)initWithMsgModel:;
- (id)lynxCardID;
- (double)actuallyHeight;
- (void)setActuallyHeight:;
- (double)singleMsgHeight;
- (void)setLynxCardID:;
- (id)init;
- (void).cxx_destruct;
+ (id)generateViewModelWithCardInfo:preferModel:;
@end
