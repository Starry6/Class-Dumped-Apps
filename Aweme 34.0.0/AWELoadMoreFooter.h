@interface AWELoadMoreFooter : AWELoadMoreBaseFooter
@property (nonatomic) BOOL showNoMoreDataText;
@property (nonatomic) NSString noMoreDataString;
@property (nonatomic) NSAttributedString noMoreDataAttributedString;
@property (nonatomic) UILabel label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UILabel label;
- (void)updateLabelWithAttributedText:;
- (void)forceUpdateUI;
- (id)getInnerLabel;
- (void)updateLabelWithText:;
- (void)updateLabelWithTextColor:;
- (void)p_setupLabel;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
@end
