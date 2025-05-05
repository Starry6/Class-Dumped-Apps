@interface VKCElementCollection : VKCBaseElement
@property (nonatomic) NSString title;
@property (nonatomic) NSArray _children;
- (void)setTitle:;
- (id)children;
- (id)title;
- (id)stringValue;
- (void).cxx_destruct;
- (id)_children;
- (void)set_children:;
+ (id)collectionWithTitle:elementInfoText:parent:;
+ (id)collectionWithTitle:children:parent:;
@end
