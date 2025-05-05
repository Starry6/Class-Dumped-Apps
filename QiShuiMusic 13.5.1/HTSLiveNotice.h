@interface HTSLiveNotice : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString rejectReason;
+ (id)descriptor;
@end
