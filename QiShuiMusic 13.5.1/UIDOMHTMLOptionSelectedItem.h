@interface UIDOMHTMLOptionSelectedItem : NSObject
@property (nonatomic) DOMHTMLOptionElement _node;
- (BOOL)selected;
- (id)node;
- (void)dealloc;
- (void)setSelected:;
- (BOOL)isGroup;
- (id)_node;
- (void)unselect;
- (id)initWithHTMLOptionNode:;
- (void)set_node:;
@end
