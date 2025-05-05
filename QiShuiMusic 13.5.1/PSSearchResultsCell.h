@interface PSSearchResultsCell : UITableViewCell
@property (nonatomic) BOOL shouldIndentContent;
@property (nonatomic) BOOL shouldIndentSeparator;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (BOOL)shouldIndentContent;
- (void)setShouldIndentContent:;
- (BOOL)shouldIndentSeparator;
- (void)setShouldIndentSeparator:;
+ (id)reuseIdentifier;
@end
