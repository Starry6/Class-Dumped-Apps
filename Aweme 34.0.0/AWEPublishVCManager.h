@interface AWEPublishVCManager : NSObject
- (id)aAWEPublishVCManagerCommonAdapter;
+ (id)templateButton;
+ (id)buttonPublishForPublishModel:;
+ (id)switchInputButton;
+ (id)inputTableViewCell;
+ (id)publishToTableViewCell;
+ (id)publishButtonForNaviForPublishModel:;
+ (id)privateTableViewCell;
+ (id)buttonPublishFriendsDailyForPublishModel:;
+ (id)hashtagButton;
+ (id)atButton;
+ (id)switchInputLongTextButton;
+ (id)p_hashtagButtonForCommonSetting;
+ (id)p_templateButtonForCommonSetting;
+ (void)updatePublishButton:withModel:;
+ (Class)aAWEPublishVCManagerCommonAdapterClass;
+ (id)switchInputLongTextButtonNoteStyle;
+ (id)buttonDraft;
+ (id)finishButtonForNavi;
+ (id)draftButtonForNavi;
+ (id)titleInputTextTemplateLabel:;
+ (id)titleInputCloseKeyboardButton;
+ (id)textTemplateViewKeyboardButton;
+ (id)messageButton;
@end
