@interface HTSLiveGiftTouchLabel : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString uniqueKey;
+ (id)descriptor;
@end
