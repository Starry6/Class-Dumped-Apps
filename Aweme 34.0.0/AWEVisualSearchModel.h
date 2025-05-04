@interface AWEVisualSearchModel : MTLModel
@property (nonatomic) BOOL showVisualEntry;
@property (nonatomic) AWEURLModel similarGoodsImageURL;
@property (nonatomic) NSString similarGoodsTitle;
@property (nonatomic) NSString entryText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entryText;
- (void)setEntryText:;
- (BOOL)showVisualEntry;
- (void)setShowVisualEntry:;
- (id)similarGoodsImageURL;
- (void)setSimilarGoodsImageURL:;
- (id)similarGoodsTitle;
- (void)setSimilarGoodsTitle:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
