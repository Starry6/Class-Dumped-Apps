@interface HTSLiveDoubleLikeDetail : IESLivePBBaseMessage
@property (nonatomic) BOOL doubleFlag;
@property (nonatomic) NSInteger seqId;
@property (nonatomic) NSInteger renewalsNum;
@property (nonatomic) NSInteger triggersNum;
+ (id)descriptor;
@end
