@interface IESIMVisualSearchModel : MTLModel
@property (nonatomic) BOOL showVisualEntry;
@property (nonatomic) IESIMURLModel similarGoodsImageURL;
@property (nonatomic) NSString similarGoodsTitle;
@property (nonatomic) NSString entryText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showVisualEntry;
- (id)entryText;
- (void)setEntryText:;
- (void)setShowVisualEntry:;
- (void)setSimilarGoodsImageURL:;
- (void)setSimilarGoodsTitle:;
- (id)similarGoodsImageURL;
- (id)similarGoodsTitle;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
