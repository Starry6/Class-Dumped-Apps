@interface AWERelatedSearchBarModel : MTLModel
@property (nonatomic) BOOL isCheckedBrandWord;
@property (nonatomic) BOOL isBrandWord;
@property (nonatomic) AWEURLModel searchIcon;
@property (nonatomic) NSString guideText;
@property (nonatomic) NSString queryWord;
@property (nonatomic) NSNumber jumpType;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString queryId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpType;
- (id)guideText;
- (void)setGuideText:;
- (void)setJumpType:;
- (BOOL)isCheckedBrandWord;
- (void)setIsCheckedBrandWord:;
- (BOOL)isBrandWord;
- (void)setIsBrandWord:;
- (id)queryWord;
- (void)setQueryWord:;
- (id)searchIcon;
- (void)setSearchIcon:;
- (id)schema;
- (void)setSchema:;
- (id)queryId;
- (void).cxx_destruct;
- (void)setQueryId:;
+ (id)searchIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
