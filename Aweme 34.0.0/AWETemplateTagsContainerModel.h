@interface AWETemplateTagsContainerModel : AWEBaseApiModel
@property (nonatomic) NSString ID;
@property (nonatomic) q template;
@property (nonatomic) AWETemplateTagsContainerStyleModel containerStyle;
@property (nonatomic) NSArray elements;
@property (nonatomic) NSString eventID;
- (void)setContainerStyle:;
- (void)setID:;
- (id)ID;
- (id)eventID;
- (id)elements;
- (void).cxx_destruct;
- (void)setEventID:;
- (void)setElements:;
- (void)setTemplate:;
- (long long)template;
- (id)containerStyle;
+ (id)containerStyleJSONTransformer;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
