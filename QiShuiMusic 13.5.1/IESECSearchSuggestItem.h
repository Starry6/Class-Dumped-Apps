@interface IESECSearchSuggestItem : MTLModel
@property (nonatomic) NSString content;
@property (nonatomic) IESECSearchSuggestWordRecord wordRecord;
@property (nonatomic) NSArray highlightPositions;
@property (nonatomic) IESECURLModel tagIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagIcon;
- (id)highlightPositions;
- (void)setHighlightPositions:;
- (void)setTagIcon:;
- (void)setWordRecord:;
- (id)wordRecord;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)highlightPositionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
