@interface AWEProfileBaseHeaderSegmentItemConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) NSString redDotAccessibilityText;
@property (nonatomic) BOOL showBackground;
@property (nonatomic) BOOL isNewFullScreenStyle;
- (BOOL)showRedDot;
- (void)setShowRedDot:;
- (id)redDotAccessibilityText;
- (void)setRedDotAccessibilityText:;
- (BOOL)showBackground;
- (BOOL)isNewFullScreenStyle;
- (void)setIsNewFullScreenStyle:;
- (void)setShowBackground:;
- (void).cxx_destruct;
- (id)title;
- (BOOL)selected;
- (void)setTitle:;
- (void)setSelected:;
- (void)setShowLock:;
- (BOOL)showLock;
@end
