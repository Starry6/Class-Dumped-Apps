@interface AWEPropGuideModel : MTLModel
@property (nonatomic) BOOL showGuide;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString propName;
@property (nonatomic) NSString propID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showGuide;
- (void)setShowGuide:;
- (void)setIconURL:;
- (id)iconURL;
- (void).cxx_destruct;
- (id)propName;
- (void)setPropName:;
- (id)propID;
- (void)setPropID:;
+ (id)iconURLJSONTransformer;
+ (id)showGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
