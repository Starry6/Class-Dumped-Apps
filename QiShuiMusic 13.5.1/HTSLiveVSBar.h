@interface HTSLiveVSBar : IESLivePBBaseMessage
@property (nonatomic) HTSLiveVSItemBar itemComment;
@property (nonatomic) BOOL hasItemComment;
@property (nonatomic) HTSLiveVSItemBar itemBar;
@property (nonatomic) BOOL hasItemBar;
+ (id)descriptor;
@end
