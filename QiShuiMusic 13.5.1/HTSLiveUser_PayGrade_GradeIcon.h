@interface HTSLiveUser_PayGrade_GradeIcon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q iconDiamond;
@property (nonatomic) q level;
@property (nonatomic) NSString levelStr;
+ (id)descriptor;
@end
