@interface AWEContactListTableViewCell : AWEUIListTableViewCell
@property (nonatomic) AWEUserNameLabel centerUserNameLabel;
- (id)centerUserNameLabel;
- (id)positionWithRange:;
- (void)addHightlightWithAttributeString:prefixLength:positions:;
- (void)configWithModel:isFriend:isHightLight:;
- (void)setCenterUserNameLabel:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)_setupUI;
+ (double)sugguestHeight;
+ (long long)cellType;
+ (double)suggestedHeight;
@end
