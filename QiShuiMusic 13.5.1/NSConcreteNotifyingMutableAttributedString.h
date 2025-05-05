@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString
- (void)setDelegate:;
- (void)beginEditing;
- (id)delegate;
- (void)endEditing;
- (void)edited:range:changeInLength:;
+ (Class)_mutableStringClass;
@end
