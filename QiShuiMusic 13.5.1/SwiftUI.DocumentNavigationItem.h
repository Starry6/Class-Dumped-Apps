@interface SwiftUI.DocumentNavigationItem : UINavigationItem
@property (nonatomic) NSArray leftBarButtonItems;
@property (nonatomic) NSString title;
- (id)initWithTitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)leftBarButtonItems;
- (void)setLeftBarButtonItems:;
- (void)dismiss:;
@end
