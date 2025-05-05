@interface RivalsResponse_TopTips : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) NSInteger topTipsType;
@property (nonatomic) NSString schemeURL;
+ (id)descriptor;
@end
