@interface HTSLiveCommonDot : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q priority;
@property (nonatomic) NSInteger style;
@property (nonatomic) NSInteger appearMode;
@property (nonatomic) NSInteger disappearMode;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
