@interface AWEDTOSearchParams : MTLModel
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString searchResultId;
@property (nonatomic) NSString listItemId;
@property (nonatomic) NSString tokenType;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) NSString searchEnterFrom;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)searchId;
- (id)searchResultId;
- (void)setSearchId:;
- (void)setSearchResultId:;
- (id)searchKeyword;
- (id)listItemId;
- (void)setListItemId:;
- (void)setSearchKeyword:;
- (id)searchEnterFrom;
- (void)setSearchEnterFrom:;
- (void)setTokenType:;
- (void).cxx_destruct;
- (id)tokenType;
+ (id)JSONKeyPathsByPropertyKey;
@end
