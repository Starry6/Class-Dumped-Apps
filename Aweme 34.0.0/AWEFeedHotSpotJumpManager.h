@interface AWEFeedHotSpotJumpManager : NSObject
@property (nonatomic) AWEHotSpotListModel hotSpotListModel;
@property (nonatomic) q type;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString referString;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)hotSpotListModel;
- (void)setHotSpotListModel:;
- (void)jumpAction;
- (void)configureWithModel:referString:;
- (long long)viewTypeForString:model:;
- (void)jumpToSearchResult;
- (void)jumpUsingSchema;
- (BOOL)isRisingHotSpot:;
- (id)handleHotListSchema:schemaDict:;
- (id)addLiveParamsToHotListSchema:needExpand:sentenceID:;
- (id)init;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)addParams:toString:;
@end
