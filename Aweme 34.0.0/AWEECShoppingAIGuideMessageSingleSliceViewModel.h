@interface AWEECShoppingAIGuideMessageSingleSliceViewModel : AWEECShoppingAIGuideMessageSingleViewModel
@property (nonatomic) double actuallyHeight;
@property (nonatomic) NSString sliceCardID;
- (id)initWithMsgModel:;
- (double)actuallyHeight;
- (void)setActuallyHeight:;
- (id)sliceCardID;
- (double)singleMsgHeight;
- (void)setSliceCardID:;
- (id)init;
- (void).cxx_destruct;
+ (id)generateViewModelWithCardInfo:preferModel:;
@end
