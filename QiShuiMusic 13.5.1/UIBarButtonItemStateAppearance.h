@interface UIBarButtonItemStateAppearance : NSObject
@property (nonatomic) _UIBarButtonItemData data;
@property (nonatomic) NSArray itemEffects;
@property (nonatomic) NSDictionary titleTextAttributes;
@property (nonatomic) {UIOffset=dd} titlePositionAdjustment;
@property (nonatomic) UIImage backgroundImage;
@property (nonatomic) {UIOffset=dd} backgroundImagePositionAdjustment;
- (void)setTitlePositionAdjustment:;
- (id)init;
- (id)titlePositionAdjustment;
- (void)setTitleTextAttributes:;
- (id)data;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void).cxx_destruct;
- (void)setData:;
- (id)titleTextAttributes;
- (void)_writeToStorage:;
- (id)_initWithOwner:data:state:;
- (void)_clearOwner;
- (id)itemEffects;
- (void)setItemEffects:;
- (id)backgroundImagePositionAdjustment;
- (void)setBackgroundImagePositionAdjustment:;
@end
