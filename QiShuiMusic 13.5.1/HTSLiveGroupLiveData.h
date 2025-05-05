@interface HTSLiveGroupLiveData : IESLivePBBaseMessage
@property (nonatomic) q isGroupLive;
@property (nonatomic) NSInteger groupLiveMode;
+ (id)descriptor;
@end
