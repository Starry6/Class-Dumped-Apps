@interface RivalsRecommendResponse_SearchBar : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) NSString content;
@property (nonatomic) NSString tabName;
+ (id)descriptor;
@end
