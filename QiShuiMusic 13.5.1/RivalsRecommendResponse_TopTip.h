@interface RivalsRecommendResponse_TopTip : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) NSInteger topTipType;
@property (nonatomic) NSString schemeURL;
+ (id)descriptor;
@end
