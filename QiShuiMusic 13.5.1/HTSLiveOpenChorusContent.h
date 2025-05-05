@interface HTSLiveOpenChorusContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveChorusInfo chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (nonatomic) NSString subSingerToast;
+ (id)descriptor;
@end
