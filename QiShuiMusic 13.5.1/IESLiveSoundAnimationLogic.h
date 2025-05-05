@interface IESLiveSoundAnimationLogic : NSObject
+ (id)calculateSpeakingImageList:;
+ (id)imageWithSpeakingImageList:gender:speakingType:voiceWave:;
+ (id)imageWithSpeakingType:speakingImage:;
+ (id)imageWithSpeakingType:voiceWave:;
+ (BOOL)isSpeakingImageListValid:;
+ (BOOL)isVoiceWaveEnhanceStyle;
+ (id)speakingImageWithGender:speakingImageList:;
@end
