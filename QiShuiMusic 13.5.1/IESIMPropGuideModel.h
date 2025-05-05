@interface IESIMPropGuideModel : MTLModel
@property (nonatomic) BOOL showGuide;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString propName;
@property (nonatomic) NSString propID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowGuide:;
- (BOOL)showGuide;
- (void)setIconURL:;
- (void).cxx_destruct;
- (id)iconURL;
- (id)propName;
- (void)setPropName:;
- (id)propID;
- (void)setPropID:;
+ (id)iconURLJSONTransformer;
+ (id)showGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
