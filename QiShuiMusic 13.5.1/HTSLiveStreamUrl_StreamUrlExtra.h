@interface HTSLiveStreamUrl_StreamUrlExtra : IESLivePBBaseMessage
@property (nonatomic) q height;
@property (nonatomic) q width;
@property (nonatomic) q fps;
@property (nonatomic) q maxBitrate;
@property (nonatomic) q minBitrate;
@property (nonatomic) q defaultBitrate;
@property (nonatomic) q bitrateAdaptStrategy;
@property (nonatomic) q anchorInteractProfile;
@property (nonatomic) q audienceInteractProfile;
@property (nonatomic) BOOL hardwareEncode;
@property (nonatomic) q videoProfile;
@property (nonatomic) HTSLiveStreamUrl_StreamUrlExtra_SuperResolution superResolution;
@property (nonatomic) BOOL hasSuperResolution;
@property (nonatomic) BOOL h265Enable;
@property (nonatomic) q gopSec;
@property (nonatomic) BOOL bframeEnable;
@property (nonatomic) BOOL roi;
@property (nonatomic) BOOL swRoi;
@property (nonatomic) BOOL bytevc1Enable;
@property (nonatomic) HTSLiveStreamUrl_StreamUrlExtra_AnchorClientInfo anchorClientInfo;
@property (nonatomic) BOOL hasAnchorClientInfo;
@property (nonatomic) HTSLiveStreamUrl_StreamUrlExtra_AdaptionInfo adaptionInfo;
@property (nonatomic) BOOL hasAdaptionInfo;
+ (id)descriptor;
@end
