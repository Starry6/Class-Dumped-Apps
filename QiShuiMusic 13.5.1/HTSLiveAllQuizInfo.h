@interface HTSLiveAllQuizInfo : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString title;
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) q status;
+ (id)descriptor;
@end
