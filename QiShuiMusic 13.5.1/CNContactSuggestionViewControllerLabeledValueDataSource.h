@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject
@property (nonatomic) CNLabeledValue labeledValue;
@property (nonatomic) Q type;
@property (nonatomic) NSString appName;
@property (nonatomic) NSAttributedString formattedSnippet;
@property (nonatomic) NSString title;
@property (nonatomic) NSString date;
@property (nonatomic) NSString with;
@property (nonatomic) NSURL url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)labeledValue;
- (id)appName;
- (id)date;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setLabeledValue:;
- (id)formattedSnippet;
- (id)with;
- (id)initWithLabeledValue:;
@end
