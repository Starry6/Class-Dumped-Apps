@interface CNContactSuggestionMatch : NSObject
@property (nonatomic) SGContactMatch contactMatch;
@property (nonatomic) SGContact contact;
@property (nonatomic) NSString mainStoreLinkedIdentifier;
- (id)contact;
- (void)setContact:;
- (void).cxx_destruct;
- (void)setContactMatch:;
- (id)contactMatch;
- (id)mainStoreLinkedIdentifier;
- (void)setMainStoreLinkedIdentifier:;
+ (id)os_log;
+ (id)suggestionFromContactMatch:;
+ (void)fetchLinkedIdentifiersForContactSuggestionMatches:fromSuggestionService:;
@end
