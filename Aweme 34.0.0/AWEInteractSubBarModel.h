@interface AWEInteractSubBarModel : AWEBaseApiModel
@property (nonatomic) NSArray contents;
@property (nonatomic) NSArray btns;
- (id)btns;
- (void)setBtns:;
- (void)setContents:;
- (id)contents;
- (void).cxx_destruct;
+ (id)contentsJSONTransformer;
+ (id)btnsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
