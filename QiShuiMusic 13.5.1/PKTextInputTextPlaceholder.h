@interface PKTextInputTextPlaceholder : UITextPlaceholder
@property (nonatomic) @ placeholder;
@property (nonatomic) BOOL shouldIgnoreOrigin;
@property (nonatomic) NSArray _rects;
- (id)placeholder;
- (void)setPlaceholder:;
- (void).cxx_destruct;
- (id)rects;
- (id)_rects;
- (BOOL)shouldIgnoreOrigin;
- (void)setShouldIgnoreOrigin:;
- (void)set_rects:;
+ (id)placeholderWithTextPlaceholder:;
+ (id)placeholderWithWebTextPlaceholder:;
+ (id)placeholderWithToken:frame:;
+ (id)placeholderWithText:rects:;
@end
