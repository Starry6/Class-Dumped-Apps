@interface HTSLiveLinkmicInteractEntrance_ButtonInfo : IESLivePBBaseMessage
@property (nonatomic) NSString toast;
@property (nonatomic) BOOL disable;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL clickToNext;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString toastColor;
+ (id)descriptor;
@end
