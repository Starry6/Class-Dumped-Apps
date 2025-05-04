@interface AWENearbyMallLiveResourceInfo : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) AWEURLModel backgroundImageURL;
@property (nonatomic) NSNumber insertPosition;
@property (nonatomic) NSString trackParams;
@property (nonatomic) AWEURLModel titleImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (id)jumpSchema;
- (id)insertPosition;
- (void)setInsertPosition:;
- (void)setJumpSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTitleImage:;
- (id)titleImage;
- (id)backgroundImageURL;
- (void)setBackgroundImageURL:;
+ (id)backgroundImageURLJSONTransformer;
+ (id)titleImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
