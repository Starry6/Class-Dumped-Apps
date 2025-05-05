@interface IESECSearchSuggestWordRecord : MTLModel
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString wordsContent;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWordsSource:;
- (void)setWordsContent:;
- (id)wordsContent;
- (id)wordsSource;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
