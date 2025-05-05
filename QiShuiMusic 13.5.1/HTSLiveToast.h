@interface HTSLiveToast : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString toastId;
+ (id)descriptor;
@end
