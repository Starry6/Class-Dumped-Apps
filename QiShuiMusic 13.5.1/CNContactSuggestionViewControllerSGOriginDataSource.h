@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject
@property (nonatomic) SGOrigin origin;
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
- (void)setOrigin:;
- (id)origin;
- (id)appName;
- (id)date;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)formattedSnippet;
- (id)with;
- (id)initWithSGOrigin:;
- (id)contactNameFromPerson:;
+ (id)dateFormatter;
+ (id)contactSuggestionTypeBySuggestionType;
@end
