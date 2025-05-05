@interface IESLiveWhiteCategoryCert_CertIcon : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
