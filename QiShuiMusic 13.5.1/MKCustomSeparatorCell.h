@interface MKCustomSeparatorCell : MKTableViewCell
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) double leftSeparatorInset;
@property (nonatomic) double rightSeparatorInset;
@property (nonatomic) double leadingSeparatorInset;
@property (nonatomic) double trailingSeparatorInset;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)isSeparatorHidden;
- (void)setSeparatorHidden:;
- (id)_separatorFrame;
- (void)_updateSeparatorInset;
- (void)setLeftSeparatorInset:;
- (void)setRightSeparatorInset:;
- (void)setLeadingSeparatorInset:;
- (double)leadingSeparatorInset;
- (void)setTrailingSeparatorInset:;
- (double)trailingSeparatorInset;
- (double)leftSeparatorInset;
- (double)rightSeparatorInset;
@end
