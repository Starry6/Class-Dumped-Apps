@interface HTSLiveProfileCardPreviewDock : IESLivePBBaseMessage
@property (nonatomic) BOOL enablePreview;
@property (nonatomic) q assetId;
@property (nonatomic) HTSLiveProfileCardPreviewButton rightButton;
@property (nonatomic) BOOL hasRightButton;
@property (nonatomic) NSInteger textAlignment;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
