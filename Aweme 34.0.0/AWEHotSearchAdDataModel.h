@interface AWEHotSearchAdDataModel : MTLModel
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) AWEURLModel clickTrackURLList;
@property (nonatomic) AWEURLModel trackURLList;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) NSArray itemIDList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)clickTrackURLList;
- (void)setCreativeID:;
- (id)trackURLList;
- (void)setTrackURLList:;
- (void)setClickTrackURLList:;
- (id)itemIDList;
- (void)setItemIDList:;
- (void).cxx_destruct;
- (BOOL)isPreview;
- (void)setIsPreview:;
- (id)creativeID;
+ (id)clickTrackURLListJSONTransformer;
+ (id)trackUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
