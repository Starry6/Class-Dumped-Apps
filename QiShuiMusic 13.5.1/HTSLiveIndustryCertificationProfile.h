@interface HTSLiveIndustryCertificationProfile : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString contentColor;
@property (nonatomic) NSString bgColor;
@property (nonatomic) q certType;
+ (id)descriptor;
@end
