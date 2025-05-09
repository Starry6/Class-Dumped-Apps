@interface UIKBWatch10KeyLayout : NSObject
@property (nonatomic) q leftControlKeys;
@property (nonatomic) {UIEdgeInsets=dddd} leftControlKeysInsets;
@property (nonatomic) q gridRows;
@property (nonatomic) q gridColumns;
@property (nonatomic) q rightControlKeys;
@property (nonatomic) {UIEdgeInsets=dddd} rightControlKeysInsets;
@property (nonatomic) double controlKeyWidthRatio;
- (id)initWithFrame:;
- (void)layout;
- (void).cxx_destruct;
- (id)frameForLeftControlKeyAt:;
- (id)frameForRightControlKeyAt:;
- (id)frameForGridKeyAt:inRow:;
- (id)layoutControlKeys:in:;
- (long long)leftControlKeys;
- (void)setLeftControlKeys:;
- (id)leftControlKeysInsets;
- (void)setLeftControlKeysInsets:;
- (long long)gridRows;
- (void)setGridRows:;
- (long long)gridColumns;
- (void)setGridColumns:;
- (long long)rightControlKeys;
- (void)setRightControlKeys:;
- (id)rightControlKeysInsets;
- (void)setRightControlKeysInsets:;
- (double)controlKeyWidthRatio;
- (void)setControlKeyWidthRatio:;
@end
