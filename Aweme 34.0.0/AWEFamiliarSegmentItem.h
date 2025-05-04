@interface AWEFamiliarSegmentItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL shouldShowYellowDot;
@property (nonatomic) BOOL shouldShowDropDownArrow;
- (BOOL)shouldShowYellowDot;
- (void)setShouldShowYellowDot:;
- (void)syncWithItem:;
- (BOOL)shouldShowDropDownArrow;
- (void)setShouldShowDropDownArrow:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
