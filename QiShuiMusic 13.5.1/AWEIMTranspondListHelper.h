@interface AWEIMTranspondListHelper : NSObject
@property (nonatomic) IESIMSaaSAWEIMSearchEngine searchEngine;
@property (nonatomic) NSArray allContacts;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupSearchEngine;
- (void)searchWithKeyword:;
- (void)setSearchEngine:;
- (id)completion;
- (void)setCompletion:;
- (id)allContacts;
- (void)prepare;
- (void)clear;
- (void).cxx_destruct;
- (void)setAllContacts:;
- (id)searchEngine;
@end
