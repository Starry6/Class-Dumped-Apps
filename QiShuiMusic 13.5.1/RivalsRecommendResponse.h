@interface RivalsRecommendResponse : IESLivePBBaseMessage
@property (nonatomic) RivalsRecommendResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
