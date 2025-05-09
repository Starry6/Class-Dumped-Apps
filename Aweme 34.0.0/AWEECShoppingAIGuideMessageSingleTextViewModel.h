@interface AWEECShoppingAIGuideMessageSingleTextViewModel : AWEECShoppingAIGuideMessageSingleViewModel
@property (nonatomic) BOOL didNoticeTextReceiveEnd;
@property (nonatomic) NSString searchWordText;
@property (nonatomic) BOOL skipTypeWriter;
@property (nonatomic) BOOL textSectionDataCompleted;
@property (nonatomic) NSString textCardID;
@property (nonatomic) double actuallyHeight;
@property (nonatomic) BOOL disableUseCachedHeight;
- (id)initWithMsgModel:;
- (double)actuallyHeight;
- (void)setActuallyHeight:;
- (BOOL)skipTypeWriter;
- (BOOL)textSectionDataCompleted;
- (id)textCardID;
- (double)textCellAdditionPaddingY;
- (void)setTextCardID:;
- (double)singleMsgHeight;
- (double)singleMsgHeightWithContext:;
- (void)setSkipTypeWriter:;
- (BOOL)disableUseCachedHeight;
- (void)setDisableUseCachedHeight:;
- (BOOL)didNoticeTextReceiveEnd;
- (void)setDidNoticeTextReceiveEnd:;
- (id)searchWordText;
- (void)setSearchWordText:;
- (void)setTextSectionDataCompleted:;
- (id)init;
- (void).cxx_destruct;
+ (id)generateViewModelWithCardInfo:preferModel:;
@end
