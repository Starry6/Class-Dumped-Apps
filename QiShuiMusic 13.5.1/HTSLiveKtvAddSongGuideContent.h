@interface HTSLiveKtvAddSongGuideContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
+ (id)descriptor;
@end
