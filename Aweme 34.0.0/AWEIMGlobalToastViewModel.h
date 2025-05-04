@interface AWEIMGlobalToastViewModel : NSObject
@property (nonatomic) AWEIMSecurityGlobalToastPushModel_DialogModel dialog;
@property (nonatomic) AWEIMSecurityGlobalToastContentConfigModel model;
@property (nonatomic) NSString bizType;
@property (nonatomic) @? nextToastBlock;
- (id)bizType;
- (void)setBizType:;
- (id)attrbutedStringWithTitle:color:highlightColor:font:alignmentCenter:config:lineSpacing:;
- (void)__trackEventWithEventName:actionType:link_type:;
- (id)nextToastBlock;
- (id)initWithModel:contentModel:;
- (id)titleWithConfig:;
- (id)floatTipsTitleWithConfig:;
- (id)subTitleWithConfig:;
- (void)setNextToastBlock:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)dialog;
- (void)setDialog:;
@end
