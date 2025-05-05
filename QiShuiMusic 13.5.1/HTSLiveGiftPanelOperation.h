@interface HTSLiveGiftPanelOperation : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage leftImage;
@property (nonatomic) BOOL hasLeftImage;
@property (nonatomic) HTSLiveImage rightImage;
@property (nonatomic) BOOL hasRightImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleColor;
@property (nonatomic) q titleSize;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSString eventName;
+ (id)descriptor;
@end
