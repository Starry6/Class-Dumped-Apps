@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject
@property (nonatomic) UITextRange resultRange;
@property (nonatomic) @? targetedPreviewProvider;
- (void).cxx_destruct;
- (id)targetedPreviewProvider;
- (id)initWithRange:targetedPreviewProvider:;
- (id)resultRange;
+ (id)resultWithRange:targetedPreviewProvider:;
@end
