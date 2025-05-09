@interface AWECommerceLiveComponentModel : MTLModel
@property (nonatomic) NSString liveItemId;
@property (nonatomic) q liveType;
@property (nonatomic) AWEURLModel enterURL;
@property (nonatomic) NSString lotteryURL;
@property (nonatomic) NSNumber lotteryDrawTime;
@property (nonatomic) NSNumber currentTime;
@property (nonatomic) q actionType;
@property (nonatomic) NSArray drawPhotos;
@property (nonatomic) NSString comment;
@property (nonatomic) NSNumber retryCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveType:;
- (long long)liveType;
- (id)liveItemId;
- (void)setLiveItemId:;
- (id)enterURL;
- (void)setEnterURL:;
- (id)lotteryURL;
- (void)setLotteryURL:;
- (id)lotteryDrawTime;
- (void)setLotteryDrawTime:;
- (id)drawPhotos;
- (void)setDrawPhotos:;
- (long long)actionType;
- (void)setActionType:;
- (void)setCurrentTime:;
- (id)comment;
- (id)currentTime;
- (void)setRetryCount:;
- (id)retryCount;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)enterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
