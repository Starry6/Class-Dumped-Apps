@interface UITableViewCellUnhighlightedState : NSObject
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) UIColor backgroundColor;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (BOOL)opaque;
- (BOOL)highlighted;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)setOpaque:;
@end
