@interface IESIMVisionSearchObjectModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString objectID;
@property (nonatomic) q objectType;
@property (nonatomic) IESIMURLModel urlModel;
@property (nonatomic) IESIMRectPosition rectPosition;
@property (nonatomic) BOOL isCurrentFrame;
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString displayTitle;
@property (nonatomic) BOOL pointViewTracked;
@property (nonatomic) BOOL buttonShownTracked;
@property (nonatomic) BOOL order;
- (BOOL)buttonShownTracked;
- (BOOL)isCurrentFrame;
- (BOOL)pointViewTracked;
- (id)rectPosition;
- (void)setButtonShownTracked:;
- (void)setIsCurrentFrame:;
- (void)setPointViewTracked:;
- (void)setRectPosition:;
- (void)setUrlModel:;
- (id)urlModel;
- (id)queryID;
- (id)objectID;
- (void)setObjectID:;
- (long long)objectType;
- (BOOL)order;
- (void)setTitle:;
- (void)setQueryID:;
- (id)displayTitle;
- (id)title;
- (void).cxx_destruct;
- (void)setOrder:;
- (void)setDisplayTitle:;
- (void)setObjectType:;
+ (id)rectPositionJSONTransformer;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
