@interface AWECorpSearchNewStyleViewCell : AWECorpTaskViewCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)makeConstraints;
- (void)updateWithTheme:;
- (void)configWithNewStyleProductInfo:;
- (void)updateNewStyleConstraints;
- (void)updateLayout;
+ (double)textWidthWithProductInfo:;
+ (id)identifier;
@end
