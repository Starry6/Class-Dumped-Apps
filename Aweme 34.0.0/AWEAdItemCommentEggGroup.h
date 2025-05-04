@interface AWEAdItemCommentEggGroup : MTLModel
@property (nonatomic) NSArray editHints;
@property (nonatomic) BOOL randomHint;
@property (nonatomic) q commentEggsType;
@property (nonatomic) NSString commentEggsRegex;
@property (nonatomic) NSArray itemCommentEggList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemCommentEggList;
- (id)editHints;
- (BOOL)randomHint;
- (void)setEditHints:;
- (void)setRandomHint:;
- (long long)commentEggsType;
- (void)setCommentEggsType:;
- (id)commentEggsRegex;
- (void)setCommentEggsRegex:;
- (void)setItemCommentEggList:;
- (void).cxx_destruct;
+ (id)editHintsJSONTransformer;
+ (id)itemCommentEggListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
