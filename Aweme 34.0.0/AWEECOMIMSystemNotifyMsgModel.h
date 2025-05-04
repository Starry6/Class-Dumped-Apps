@interface AWEECOMIMSystemNotifyMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString contentText;
@property (nonatomic) YYTextLayout contentTextLayout;
@property (nonatomic) NSArray buttonModelArr;
@property (nonatomic) double contentHeight;
- (id)msgDisplayParams;
- (void)reBulildCellFullContentHeight;
- (id)contentTextLayout;
- (void)setContentTextLayout:;
- (id)buttonModelArr;
- (void)didClickActionButtonWithModel:;
- (void)setButtonModelArr:;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)title;
- (void)setContentHeight:;
- (void)setTitle:;
- (id)initWithMessage:;
- (void)setContentText:;
- (id)contentText;
+ (double)designButtonHeight;
+ (id)textContentLayoutWithModel:;
+ (double)designTitleHeight;
+ (double)itemSpacing;
+ (id)contentInsets;
+ (Class)cellClass;
@end
