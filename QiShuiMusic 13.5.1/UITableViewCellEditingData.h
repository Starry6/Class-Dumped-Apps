@interface UITableViewCellEditingData : NSObject
@property (nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
- (void)dealloc;
- (id)editControl:;
- (id)reorderSeparatorView:;
- (void).cxx_destruct;
- (id)reorderControl:;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (id)initWithTableViewCell:editingStyle:;
@end
