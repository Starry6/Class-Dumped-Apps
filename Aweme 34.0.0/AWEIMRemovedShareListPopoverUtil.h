@interface AWEIMRemovedShareListPopoverUtil : NSObject
+ (id)p_popoverViewWithText:image:preferTheme:;
+ (void)p_showIMDoubleCheckSheetViewWithShareModel:completeBlock:;
+ (void)showMenuWithShareModel:targetView:preferTheme:displayCompleteBlock:removeCompleteBlock:;
@end
