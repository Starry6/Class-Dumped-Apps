@interface HTSLivePanelConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) HTSLiveButtonImage closeButton;
@property (nonatomic) BOOL hasCloseButton;
+ (id)descriptor;
@end
