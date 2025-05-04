@interface AWEUGPendantCloseUIInfo : MTLModel
@property (nonatomic) Q closeType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} expandUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rightFoldUIFrame;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)closeType;
- (void)setCloseType:;
- (id)expandUIFrame;
- (id)foldUIFrame;
- (void)setExpandUIFrame:;
- (void)setFoldUIFrame:;
- (id)rightFoldUIFrame;
- (void)setRightFoldUIFrame:;
+ (id)JSONKeyPathsByPropertyKey;
@end
