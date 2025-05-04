@interface AWEShareAsStoryStyleComponentModel : NSObject
@property (nonatomic) NSArray images;
@property (nonatomic) NSArray texts;
@property (nonatomic) NSArray contents;
- (id)initWithImages:contentModel:textModel:;
- (id)images;
- (void)setContents:;
- (id)contents;
- (void)setImages:;
- (void).cxx_destruct;
- (void)setTexts:;
- (id)texts;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithImages:contentModel:textModel:;
@end
