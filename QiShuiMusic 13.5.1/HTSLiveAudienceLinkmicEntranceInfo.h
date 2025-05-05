@interface HTSLiveAudienceLinkmicEntranceInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString text;
+ (id)descriptor;
@end
