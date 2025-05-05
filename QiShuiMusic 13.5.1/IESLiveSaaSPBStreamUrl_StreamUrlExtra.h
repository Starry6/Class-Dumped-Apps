@interface IESLiveSaaSPBStreamUrl_StreamUrlExtra : GPBMessage
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
@property (nonatomic) BOOL h265Enable;
@property (nonatomic) q gopSec;
@property (nonatomic) BOOL bframeEnable;
@property (nonatomic) BOOL roi;
@property (nonatomic) BOOL swRoi;
@property (nonatomic) BOOL bytevc1Enable;
+ (id)descriptor;
@end
