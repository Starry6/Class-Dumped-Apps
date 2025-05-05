@interface IESLiveSaaSPushMessageView : UIView
@property (nonatomic) IESLiveSaaSPBRoomBottomMessage currentPushMessage;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString defaultActionImage;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) IESLiveSaaSPBRoomBottomMessage pushMessage;
@property (nonatomic) <HTSLiveSaaSPushMessageViewDelegate> delegate;
- (id)currentPushMessage;
- (id)defaultActionImage;
- (id)initWithPushMessage:delegate:width:diContext:;
- (id)p_dictionaryWithJsonString:;
- (void)pr_click:;
- (id)pushMessage;
- (void)setCurrentPushMessage:;
- (void)setDefaultActionImage:;
- (void)updatePushMessageWidth:;
- (id)delegate;
- (double)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (id)contentLabel;
- (void)setContentLabel:;
@end
