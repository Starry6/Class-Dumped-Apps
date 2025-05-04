@interface AWENoticeInteractionContentManager : NSObject
- (id)init;
+ (id)buildShowStickerView;
+ (id)buildShowImageViewWithImageCount:;
+ (id)buildShowVideoView;
+ (id)buildShowAudioView;
+ (id)buildContentViewAttributedString:tapHandler:;
+ (id)diggTextWithNoticeModel:;
+ (id)commentTextWithNoticeModel:;
+ (id)awemeIntroStringWithAwemeModel:;
@end
