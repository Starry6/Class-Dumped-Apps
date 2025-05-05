@interface IESECGoodsInternalFeedHoverNavbarConfig : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString imageName;
@property (nonatomic) : actionSel;
@property (nonatomic) {CGSize=dd} buttonSize;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) NSString accessibilityName;
- (SEL)actionSel;
- (void)setAccessibilityName:;
- (void)setActionSel:;
- (id)buttonSize;
- (void)setButtonSize:;
- (void)setImageName:;
- (id)imageName;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)accessibilityName;
- (BOOL)shouldDisplay;
- (void)setShouldDisplay:;
@end
