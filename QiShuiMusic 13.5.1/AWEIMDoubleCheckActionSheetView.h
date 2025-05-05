@interface AWEIMDoubleCheckActionSheetView : AWEUserActionSheetView
- (void)dismissDoubleCheckView;
- (id)init;
- (void)dealloc;
+ (id)instanceWithTitle:confirmTitle:confirmHandler:cancelHandler:;
+ (id)instanceWithTitle:deleteHandler:cancelHandler:;
@end
