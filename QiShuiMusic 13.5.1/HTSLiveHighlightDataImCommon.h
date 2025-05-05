@interface HTSLiveHighlightDataImCommon : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q pinId;
@property (nonatomic) q msgId;
@property (nonatomic) NSString title;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) HTSLivePictureTextStyle pictureTextStyle;
@property (nonatomic) BOOL hasPictureTextStyle;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
