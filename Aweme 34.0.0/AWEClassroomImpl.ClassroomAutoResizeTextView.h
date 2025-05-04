@interface AWEClassroomImpl.ClassroomAutoResizeTextView : UITextView
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {CGSize=dd} intrinsicContentSize;
- (void)setContentSize:;
- (id)intrinsicContentSize;
- (id)contentSize;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:textContainer:;
@end
