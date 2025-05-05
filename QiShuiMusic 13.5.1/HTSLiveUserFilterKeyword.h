@interface HTSLiveUserFilterKeyword : IESLivePBBaseMessage
@property (nonatomic) q wordId;
@property (nonatomic) NSString keyword;
@property (nonatomic) q insertTime;
+ (id)descriptor;
@end
