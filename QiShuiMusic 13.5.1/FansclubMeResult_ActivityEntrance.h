@interface FansclubMeResult_ActivityEntrance : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString verticalScheme;
@property (nonatomic) NSString horizontalScheme;
+ (id)descriptor;
@end
