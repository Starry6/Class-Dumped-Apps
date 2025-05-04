@interface AWEUserCell : AWEUIListTableViewCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (id)verificationImage;
- (void)dealloc;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
+ (long long)cellType;
+ (double)suggestedHeight;
@end
