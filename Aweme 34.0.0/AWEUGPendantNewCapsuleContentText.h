@interface AWEUGPendantNewCapsuleContentText : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString iconURLString;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} expandUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldUIFrame;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expandUIFrame;
- (id)foldUIFrame;
- (void)setExpandUIFrame:;
- (void)setFoldUIFrame:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)iconURLString;
- (void)setIconURLString:;
- (id)bgColor;
- (void)setBgColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
