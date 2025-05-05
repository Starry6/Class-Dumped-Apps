@interface IESECSearchSuggestCell : UITableViewCell
@property (nonatomic) <IESECSearchSuggestCellDelegate> delegate;
- (void)populateButtonClicked:;
- (void)suggestionItemClicked:;
- (void)updateWithSuggestionItem:sepratorLineHidden:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)configureSubviews;
@end
