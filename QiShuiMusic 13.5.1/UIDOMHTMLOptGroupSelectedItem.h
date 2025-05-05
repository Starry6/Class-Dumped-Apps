@interface UIDOMHTMLOptGroupSelectedItem : NSObject
@property (nonatomic) DOMHTMLOptGroupElement _node;
- (BOOL)selected;
- (id)node;
- (void)dealloc;
- (void)setSelected:;
- (BOOL)isGroup;
- (id)_node;
- (void)unselect;
- (void)set_node:;
- (id)initWithHTMLOptGroupNode:;
@end
