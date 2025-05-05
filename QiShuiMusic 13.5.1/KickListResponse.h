@interface KickListResponse : IESLivePBBaseMessage
@property (nonatomic) KickListResponse_ResponseExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
