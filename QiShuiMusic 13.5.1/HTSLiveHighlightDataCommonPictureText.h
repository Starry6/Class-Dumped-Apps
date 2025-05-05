@interface HTSLiveHighlightDataCommonPictureText : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q pinId;
@property (nonatomic) NSString contentId;
@property (nonatomic) HTSLivePictureTextStyle pictureTextStyle;
@property (nonatomic) BOOL hasPictureTextStyle;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
