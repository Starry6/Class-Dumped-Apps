@interface IESLiveListTagFansContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage fansTag;
@property (nonatomic) BOOL hasFansTag;
+ (id)descriptor;
@end
