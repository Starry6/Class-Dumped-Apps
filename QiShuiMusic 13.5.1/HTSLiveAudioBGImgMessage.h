@interface HTSLiveAudioBGImgMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveAudioBGData bgList;
@property (nonatomic) BOOL hasBgList;
@property (nonatomic) NSInteger reviewPass;
@property (nonatomic) NSInteger bgType;
@property (nonatomic) NSString showText;
+ (id)descriptor;
@end
