@interface AWEECMallFeedDetailResponseModel : MTLModel
@property (nonatomic) NSArray feed;
@property (nonatomic) AWEECMallFeedPageModel page;
@property (nonatomic) NSString requestId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feed;
- (id)page;
- (void)setFeed:;
- (void).cxx_destruct;
- (void)setRequestId:;
- (id)requestId;
- (void)setPage:;
+ (id)feedJSONTransformer;
+ (id)pageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
