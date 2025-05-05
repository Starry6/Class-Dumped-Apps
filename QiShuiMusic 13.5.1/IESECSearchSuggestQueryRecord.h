@interface IESECSearchSuggestQueryRecord : MTLModel
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWordsSource:;
- (id)wordsSource;
- (id)queryID;
- (void)setQueryID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
