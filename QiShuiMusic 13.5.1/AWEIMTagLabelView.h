@interface AWEIMTagLabelView : UITextView
@property (nonatomic) q role;
- (void)sizeWidthToFitLabelHeight;
- (void)updateRole:;
- (void)updateTagText:;
- (id)initWithScene:;
- (void)setRole:;
- (long long)role;
+ (double)fontSizeWithScene:;
@end
