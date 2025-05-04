@interface AWEDoubleColumnSearchMerchandiseTextTagModel : MTLModel
@property (nonatomic) NSString textContent;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString textTagType;
@property (nonatomic) AWEURLModel textLeftIcon;
@property (nonatomic) Q textStyle;
@property (nonatomic) BOOL hideLeftIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textTagType;
- (id)textLeftIcon;
- (BOOL)hideLeftIcon;
- (void)setHideLeftIcon:;
- (void)setTextTagType:;
- (void)setTextLeftIcon:;
- (unsigned long long)textStyle;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setTextStyle:;
- (void)setTextContent:;
- (id)textContent;
+ (id)JSONKeyPathsByPropertyKey;
@end
