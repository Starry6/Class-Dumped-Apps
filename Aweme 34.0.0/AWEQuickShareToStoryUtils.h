@interface AWEQuickShareToStoryUtils : NSObject
+ (id)shareCommentImageToStoryModelWithAwemeModel:;
+ (void)composeBackgroundTopColor:bottomColor:withForegroundImage:storyModel:completion:;
+ (void)getImageWithURLList:completion:;
+ (void)getGradientColorWithImage:completion:;
+ (void)composeBackgroundImage:withForegroundImage:completion:;
+ (id)getStaticAvatarImageFromUser:;
+ (id)shareImageToStoryModelWithAwemeModel:;
+ (id)shareSlidesVideoToStoryModelWithAwemeModel:videoModel:;
+ (id)shareVideoToStoryModelWithAwemeModel:;
+ (void)getImageWithShareImageToStoryModel:completion:;
+ (void)getImageWithShareVideoToStoryModel:completion:;
+ (id)composeBackgroundTopColor:bottomColor:withForegroundImage:;
@end
