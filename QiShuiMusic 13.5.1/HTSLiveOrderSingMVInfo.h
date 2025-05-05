@interface HTSLiveOrderSingMVInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveMVBaseInfo mvBaseInfo;
@property (nonatomic) BOOL hasMvBaseInfo;
@property (nonatomic) NSString openId;
@property (nonatomic) BOOL isHighQuality;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) NSInteger mvType;
@property (nonatomic) NSInteger playStatus;
+ (id)descriptor;
@end
