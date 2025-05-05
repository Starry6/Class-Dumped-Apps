@interface IESLiveMessageTrayEffectModel : NSObject
@property (nonatomic) <IESLiveEffectTrayComboDelegate> delegate;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) double contentHeight;
@property (nonatomic) HTSLiveTrayEffectMessage message;
@property (nonatomic) NSArray comboInfo;
- (id)comboInfo;
- (void)setComboInfo:;
- (double)contentHeight;
- (id)content;
- (void)setContent:;
- (void)setMessage:;
- (void)setDelegate:;
- (id)delegate;
- (id)message;
- (void).cxx_destruct;
- (void)setContentHeight:;
@end
