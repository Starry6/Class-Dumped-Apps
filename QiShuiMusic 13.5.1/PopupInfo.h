@interface PopupInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage popUpImg;
@property (nonatomic) BOOL hasPopUpImg;
@property (nonatomic) HTSLiveText popUpText;
@property (nonatomic) BOOL hasPopUpText;
@property (nonatomic) HTSLiveImage popUpButtonImg;
@property (nonatomic) BOOL hasPopUpButtonImg;
@property (nonatomic) NSString schemeURL;
+ (id)descriptor;
@end
