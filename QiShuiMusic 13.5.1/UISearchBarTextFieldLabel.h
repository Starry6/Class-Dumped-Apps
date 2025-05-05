@interface UISearchBarTextFieldLabel : UITextFieldLabel
@property (nonatomic) BOOL ignoresGeometryChanges;
- (void)setFrame:;
- (void)setIgnoresGeometryChanges:;
- (BOOL)ignoresGeometryChanges;
+ (id)_defaultAttributes;
@end
