@interface AWENovelWelfareBottomBarModel : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSString simpleText;
@property (nonatomic) NSString icon;
@property (nonatomic) AWENovelWelfareAttributeInfo attrInfo;
- (void)setAttrInfo:;
- (id)attrInfo;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (void)setSimpleText:;
- (id)simpleText;
@end
