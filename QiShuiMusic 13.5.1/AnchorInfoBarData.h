@interface AnchorInfoBarData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpText;
@property (nonatomic) NSString URL;
+ (id)descriptor;
@end
