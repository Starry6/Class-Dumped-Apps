@interface IESLiveLinkMicProfitBannerInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) IESLiveLinkMicProfitBannerInfoText textInfo;
@property (nonatomic) BOOL hasTextInfo;
+ (id)descriptor;
@end
