@interface HTSLiveMatchTitle : IESLivePBBaseMessage
@property (nonatomic) NSString roomTitle;
@property (nonatomic) HTSLiveMatchTitle_TitleIcon titleIcon;
@property (nonatomic) BOOL hasTitleIcon;
+ (id)descriptor;
@end
