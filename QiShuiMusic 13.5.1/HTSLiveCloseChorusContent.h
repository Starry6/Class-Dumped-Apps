@interface HTSLiveCloseChorusContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixCloseUserId;
@property (nonatomic) IESLiveChorusInfo chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (nonatomic) NSString closeUserId;
@property (nonatomic) NSString closeToast;
@property (nonatomic) NSInteger closeReason;
- (id)mixCloseUserId;
+ (id)descriptor;
@end
