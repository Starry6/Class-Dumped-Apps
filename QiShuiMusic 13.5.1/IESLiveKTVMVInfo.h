@interface IESLiveKTVMVInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveMVBaseInfo mvBaseInfo;
@property (nonatomic) BOOL hasMvBaseInfo;
@property (nonatomic) q count;
@property (nonatomic) q createTime;
@property (nonatomic) NSInteger ktvMvType;
+ (id)descriptor;
@end
