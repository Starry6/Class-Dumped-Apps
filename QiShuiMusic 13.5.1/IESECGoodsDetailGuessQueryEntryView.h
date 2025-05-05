@interface IESECGoodsDetailGuessQueryEntryView : UIView
@property (nonatomic) IESECUIImageView searchImageView;
@property (nonatomic) UILabel guessQueryLabel;
@property (nonatomic) IESECButton queryWordButton;
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guessQueryLabel;
- (id)searchImageView;
- (id)queryWordButton;
- (void)initializeWithParameters:;
- (void)setGuessQueryLabel:;
- (void)setQueryWordButton:;
- (void)setSearchImageView:;
- (id)initWithFrame:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (void)handleTap;
@end
