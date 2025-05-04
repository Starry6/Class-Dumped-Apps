@interface AWEIMDoubleCheckActionSheetView : AWEUserActionSheetView
- (void)dismissDoubleCheckView;
- (id)init;
- (void)dealloc;
+ (id)instanceWithTitle:confirmTitle:confirmHandler:cancelHandler:;
+ (id)instanceWithTitle:confirmTitle:confirmHandler:cancelHandler:confirmSheetActionStyle:;
+ (id)instanceWithTitle:deleteHandler:cancelHandler:;
@end
