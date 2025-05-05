@interface HTSLiveAudioSpeakingImageList : IESLivePBBaseMessage
@property (nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage maleSpeakingImage;
@property (nonatomic) BOOL hasMaleSpeakingImage;
@property (nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage femaleSpeakingImage;
@property (nonatomic) BOOL hasFemaleSpeakingImage;
@property (nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage unknownSpeakingImage;
@property (nonatomic) BOOL hasUnknownSpeakingImage;
+ (id)descriptor;
@end
