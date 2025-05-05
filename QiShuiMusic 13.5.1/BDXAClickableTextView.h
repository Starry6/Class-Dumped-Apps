@interface BDXAClickableTextView : UITextView
@property (nonatomic) NSArray clickableArray;
@property (nonatomic) <BDXAClickableTextViewDelegate> clickDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickDelegate;
- (id)clickableArray;
- (void)setClickDelegate:;
- (void)setClickableArray:;
- (void)updateWithClickableText:;
- (id)init;
- (id)selectedTextRange;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void).cxx_destruct;
@end
