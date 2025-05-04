@interface AWETemplateTagsUIConfig : NSObject
@property (nonatomic) q containerTemplate;
@property (nonatomic) NSArray elementMap;
- (long long)containerTemplate;
- (void)setContainerTemplate:;
- (id)elementMap;
- (void)setElementMap:;
- (void).cxx_destruct;
+ (id)templateAvailable;
+ (id)getElementMapWithTemplate:;
+ (id)defaultContainerStyleModel;
+ (id)defaultTextStyleModel;
+ (id)defaultMultiTextStyleModel;
+ (id)defaultImageStyleModel;
+ (id)defaultMultiImageStyleModel;
+ (id)elementMapForTemplate0;
+ (id)elementMapForTemplate1;
+ (id)elementMapForTemplate2;
+ (id)elementMapForTemplate3;
+ (id)elementMapForTemplate4;
@end
