@interface RivalsRecommendResponse_TipBar_Action : IESLivePBBaseMessage
@property (nonatomic) NSString actionContent;
@property (nonatomic) HTSLiveImage actionImg;
@property (nonatomic) BOOL hasActionImg;
+ (id)descriptor;
@end
