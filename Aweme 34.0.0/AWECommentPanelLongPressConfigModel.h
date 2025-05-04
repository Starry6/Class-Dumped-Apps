@interface AWECommentPanelLongPressConfigModel : NSObject
@property (nonatomic) BOOL isNeedUGComponent;
@property (nonatomic) BOOL isNeedIMComponent;
@property (nonatomic) BOOL isApplyCustomCommentElements;
@property (nonatomic) NSArray customCommentElementList;
- (void)setIsNeedIMComponent:;
- (void)setIsNeedUGComponent:;
- (void)setCustomCommentElementList:;
- (void)setIsApplyCustomCommentElements:;
- (BOOL)isNeedUGComponent;
- (BOOL)isNeedIMComponent;
- (BOOL)isApplyCustomCommentElements;
- (id)customCommentElementList;
- (void).cxx_destruct;
@end
