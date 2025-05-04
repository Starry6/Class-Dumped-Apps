@interface AWESiriShowCutModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL isAddInSiri;
@property (nonatomic) INIntent intent;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString accessibilityText;
@property (nonatomic) NSString shortcutType;
@property (nonatomic) BOOL hasShow;
- (BOOL)hasShow;
- (void)setHasShow:;
- (BOOL)isAddInSiri;
- (void)setIsAddInSiri:;
- (void)setShortcutType:;
- (id)uuid;
- (void)setUuid:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)intent;
- (void).cxx_destruct;
- (id)title;
- (void)setIntent:;
- (void)setTitle:;
- (id)accessibilityText;
- (void)setAccessibilityText:;
- (id)shortcutType;
@end
