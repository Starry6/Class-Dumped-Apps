@interface AWETextViewManager : NSObject
@property (nonatomic) AWETextLayoutManager layoutManager;
@property (nonatomic) AWETextView textView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textView;
- (void)setTextView:;
- (id)layoutManager;
- (id)init;
- (void).cxx_destruct;
- (BOOL)layoutManager:shouldBreakLineByWordBeforeCharacterAtIndex:;
- (void)setLayoutManager:;
@end
