@interface UITextPositionImpl : UITextPosition
@property (nonatomic) WebVisiblePosition webVisiblePosition;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)webVisiblePosition;
- (void)setWebVisiblePosition:;
+ (id)wrapWebVisiblePosition:;
@end
