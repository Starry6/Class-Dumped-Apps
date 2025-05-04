@interface AWEIMPushGuideModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString leftBtnTitle;
@property (nonatomic) NSString rightBtnTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRightBtnTitle:;
- (id)rightBtnTitle;
- (id)leftBtnTitle;
- (void)setLeftBtnTitle:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
