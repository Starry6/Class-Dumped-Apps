@interface IESLiveLinkMicAudienceLinkmicInteractItem : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) IESLiveLinkMicAudienceLinkmicInteractItem_OpenPlatformInteractInfo interactInfo;
@property (nonatomic) BOOL hasInteractInfo;
@property (nonatomic) NSInteger dataType;
@property (nonatomic) q playmode;
@property (nonatomic) BOOL newArrival;
@property (nonatomic) NSInteger arrivalType;
@property (nonatomic) q arrivalVersion;
+ (id)descriptor;
@end
