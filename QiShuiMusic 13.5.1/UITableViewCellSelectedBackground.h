@interface UITableViewCellSelectedBackground : UIView
@property (nonatomic) q selectionStyle;
@property (nonatomic) UIColor multiselectBackgroundColor;
@property (nonatomic) BOOL multiselect;
@property (nonatomic) UIColor selectionTintColor;
@property (nonatomic) NSArray selectionEffects;
@property (nonatomic) UIColor noneStyleBackgroundColor;
- (void)setSelectionTintColor:;
- (void)layoutSubviews;
- (id)selectionTintColor;
- (id)multiselectBackgroundColor;
- (void)tintColorDidChange;
- (void)setNoneStyleBackgroundColor:;
- (void)setSelectionEffects:;
- (id)selectionEffects;
- (void)updateBackgroundColor;
- (id)noneStyleBackgroundColor;
- (void).cxx_destruct;
- (long long)selectionStyle;
- (void)setMultiselectBackgroundColor:;
- (void)setSelectionStyle:;
- (void)setMultiselect:;
- (BOOL)isMultiselect;
@end
