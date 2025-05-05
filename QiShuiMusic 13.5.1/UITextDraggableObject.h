@interface UITextDraggableObject : NSObject
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) UITextRange range;
@property (nonatomic) @? targetedPreviewProvider;
@property (nonatomic) @? previewProvider;
- (void)setRange:;
- (id)range;
- (void).cxx_destruct;
- (id)itemProvider;
- (id)previewProvider;
- (void)setPreviewProvider:;
- (void)setItemProvider:;
- (id)targetedPreviewProvider;
- (void)setTargetedPreviewProvider:;
+ (id)draggableObjectWithItemProvider:fromRange:;
@end
