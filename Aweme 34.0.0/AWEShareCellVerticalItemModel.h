@interface AWEShareCellVerticalItemModel : NSObject
@property (nonatomic) double iconLeading;
@property (nonatomic) double textMarginWithIcon;
@property (nonatomic) Q additionType;
@property (nonatomic) BOOL disabled;
- (double)iconLeading;
- (void)setIconLeading:;
- (double)textMarginWithIcon;
- (void)setTextMarginWithIcon:;
- (unsigned long long)additionType;
- (void)setAdditionType:;
- (BOOL)disabled;
- (void)setDisabled:;
@end
