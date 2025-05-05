@interface IESIMHybridLabelModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColorString;
@property (nonatomic) NSString backgroundColorString;
@property (nonatomic) IESIMURLModel image;
@property (nonatomic) NSString refURLString;
@property (nonatomic) NSString imageName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textColorString;
- (id)backgroundColorString;
- (id)refURLString;
- (void)setBackgroundColorString:;
- (void)setRefURLString:;
- (void)setTextColorString:;
- (void)setImageName:;
- (id)imageName;
- (void)setText:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)text;
- (id)image;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
