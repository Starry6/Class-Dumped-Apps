@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider
- (void)loadView;
+ (BOOL)isSystemNoteTakingEnabled;
+ (void)registerViewProviderClassIfNecessary;
+ (Class)drawingClassForFileType:;
+ (Class)drawingViewClassForDrawingClass:;
+ (Class)tiledViewClassForDrawingClass:;
@end
