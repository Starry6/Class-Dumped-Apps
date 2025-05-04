@interface AWEHPTopTabTooBrightOptTabConfig : MTLModel
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) NSString labelShadowColorARGB;
@property (nonatomic) NSString unselectedDarkTextColorARGB;
@property (nonatomic) UIColor labelShadowColor;
@property (nonatomic) UIColor unselectedDarkTextColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)unselectedDarkTextColor;
- (id)labelShadowColorARGB;
- (void)setLabelShadowColorARGB:;
- (id)unselectedDarkTextColorARGB;
- (void)setUnselectedDarkTextColorARGB:;
- (void)setUnselectedDarkTextColor:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (double)right;
- (double)left;
- (void)setLeft:;
- (void)setRight:;
- (id)labelShadowColor;
- (void)setLabelShadowColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
