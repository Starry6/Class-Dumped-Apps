@interface AWEHybridLabelModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColorString;
@property (nonatomic) NSString backgroundColorString;
@property (nonatomic) AWEURLModel image;
@property (nonatomic) NSString refURLString;
@property (nonatomic) NSString imageName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textColorString;
- (void)setTextColorString:;
- (id)backgroundColorString;
- (void)setBackgroundColorString:;
- (id)refURLString;
- (void)setRefURLString:;
- (id)image;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (void)setImageName:;
- (void).cxx_destruct;
- (id)imageName;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
