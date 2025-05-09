@interface HTSLiveDecoration : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) q type;
@property (nonatomic) GPBInt64Array inputRectArray;
@property (nonatomic) Q inputRectArray_Count;
@property (nonatomic) q textSize;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString content;
@property (nonatomic) q maxLength;
@property (nonatomic) q h;
@property (nonatomic) q x;
@property (nonatomic) q w;
@property (nonatomic) q y;
@property (nonatomic) q kind;
@property (nonatomic) q subType;
@property (nonatomic) HTSLiveReservation reservation;
@property (nonatomic) BOOL hasReservation;
@property (nonatomic) q status;
@property (nonatomic) HTSLiveImage ninePatchImage;
@property (nonatomic) BOOL hasNinePatchImage;
@property (nonatomic) GPBInt64Array textSpecialEffectsArray;
@property (nonatomic) Q textSpecialEffectsArray_Count;
@property (nonatomic) q textImageAdjustableStartPosition;
@property (nonatomic) q textImageAdjustableEndPosition;
@property (nonatomic) HTSLiveDecorationFontConfig textFontConfig;
@property (nonatomic) BOOL hasTextFontConfig;
@property (nonatomic) NSString auditTextColor;
+ (id)descriptor;
@end
