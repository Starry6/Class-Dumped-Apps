@interface AWEPOISearchAddLocationBannerModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString tipsSchema;
@property (nonatomic) AWEPOICommonEntryModel entryModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entryModel;
- (void)setEntryModel:;
- (id)tipsSchema;
- (void)setTipsSchema:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
