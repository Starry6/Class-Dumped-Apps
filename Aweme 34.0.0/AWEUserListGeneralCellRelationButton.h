@interface AWEUserListGeneralCellRelationButton : DUXBaseButton
@property (nonatomic) <AWEUserListGeneralCellConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initView;
- (id)attributedStringForString:color:;
- (void)setConfig:;
- (void)updateWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
+ (double)maxWidthFittingTitles:font:;
+ (double)suggestedWidthForTitles:;
@end
