@interface HTSLiveSendTogether : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
