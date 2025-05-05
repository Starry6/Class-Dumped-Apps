@interface HTSLivePinCommon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText topTitle;
@property (nonatomic) BOOL hasTopTitle;
@property (nonatomic) HTSLiveOperateInfo operateInfo;
@property (nonatomic) BOOL hasOperateInfo;
+ (id)descriptor;
@end
