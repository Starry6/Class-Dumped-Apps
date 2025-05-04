@interface AWEVideoHallFeedPreviewModel : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWETheaterSectionItemHighlightInfo highlightModel;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifierKey;
- (id)logPassback;
- (void)setLogPassback:;
- (id)highlightModel;
- (void)setHighlightModel:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (id)highlightModelJSONTransformer;
+ (id)modelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
