@interface AWELiveSoloKTVShareServiceImpl : NSObject
@property (nonatomic) AWELiveSoloKTVShareApi api;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getShareParamsWithVideoID:videoSchema:completion:;
- (void)shareSoloKTVWithParams:;
- (id)init;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
