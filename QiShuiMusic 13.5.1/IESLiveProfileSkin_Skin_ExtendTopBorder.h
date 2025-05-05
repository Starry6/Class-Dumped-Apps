@interface IESLiveProfileSkin_Skin_ExtendTopBorder : IESLivePBBaseMessage
@property (nonatomic) NSInteger overlayPicType;
@property (nonatomic) HTSLiveImage overlayImage;
@property (nonatomic) BOOL hasOverlayImage;
@property (nonatomic) HTSLiveImage overlayWebpEnter;
@property (nonatomic) BOOL hasOverlayWebpEnter;
@property (nonatomic) HTSLiveImage overlayWebpLoop;
@property (nonatomic) BOOL hasOverlayWebpLoop;
+ (id)descriptor;
@end
