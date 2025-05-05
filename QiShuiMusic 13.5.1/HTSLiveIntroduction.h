@interface HTSLiveIntroduction : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
