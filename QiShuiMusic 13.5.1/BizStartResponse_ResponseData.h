@interface BizStartResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString bizExtra;
@property (nonatomic) NSInteger pushType;
+ (id)descriptor;
@end
