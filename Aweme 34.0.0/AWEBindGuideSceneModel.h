@interface AWEBindGuideSceneModel : MTLModel
@property (nonatomic) NSString pageScene;
@property (nonatomic) NSString title;
@property (nonatomic) NSString mainText;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic) AWEBindGuideLinkModel leftLinkModel;
@property (nonatomic) AWEBindGuideLinkModel rightLinkModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showRedPoint;
- (void)setShowRedPoint:;
- (id)pageScene;
- (void)setPageScene:;
- (id)leftLinkModel;
- (void)setLeftLinkModel:;
- (id)rightLinkModel;
- (void)setRightLinkModel:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)mainText;
- (void)setMainText:;
+ (id)leftLinkModelJSONTransformer;
+ (id)rightLinkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
