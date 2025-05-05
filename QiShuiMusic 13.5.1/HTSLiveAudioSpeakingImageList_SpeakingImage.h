@interface HTSLiveAudioSpeakingImageList_SpeakingImage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage speakingLowImage;
@property (nonatomic) BOOL hasSpeakingLowImage;
@property (nonatomic) HTSLiveImage speakingDefaultImage;
@property (nonatomic) BOOL hasSpeakingDefaultImage;
@property (nonatomic) HTSLiveImage speakingHighImage;
@property (nonatomic) BOOL hasSpeakingHighImage;
+ (id)descriptor;
@end
