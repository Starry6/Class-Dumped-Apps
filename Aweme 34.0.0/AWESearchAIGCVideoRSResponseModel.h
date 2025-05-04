@interface AWESearchAIGCVideoRSResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray videoRSList;
@property (nonatomic) NSDictionary logPB;
- (id)logPB;
- (void)setLogPB:;
- (id)videoRSList;
- (void)setVideoRSList:;
- (void).cxx_destruct;
+ (id)videoRSListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
