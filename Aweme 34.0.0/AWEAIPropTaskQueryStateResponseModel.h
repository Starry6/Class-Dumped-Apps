@interface AWEAIPropTaskQueryStateResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) q completeState;
@property (nonatomic) AWEAIPropTaskVideoResponseModel video;
@property (nonatomic) NSString videoType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (long long)completeState;
- (void)setCompleteState:;
- (id)video;
- (long long)statusCode;
- (void)setVideo:;
- (id)videoType;
- (void).cxx_destruct;
- (void)setVideoType:;
- (void)setStatusCode:;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
