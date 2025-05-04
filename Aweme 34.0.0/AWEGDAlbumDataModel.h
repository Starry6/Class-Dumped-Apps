@interface AWEGDAlbumDataModel : AWEBaseApiModel
@property (nonatomic) NSArray tabInfo;
@property (nonatomic) AWEGDAlbumCategoryInfoModel categoryInfo;
@property (nonatomic) NSString previewHeaderLynxURL;
@property (nonatomic) NSString previewBottomLynxURL;
@property (nonatomic) NSString bottomBarLynxURL;
@property (nonatomic) NSString headerBarLynxURL;
@property (nonatomic) NSString bottomBarRawData;
@property (nonatomic) NSString headerBarRawData;
- (id)previewHeaderLynxURL;
- (void)setPreviewHeaderLynxURL:;
- (id)previewBottomLynxURL;
- (void)setPreviewBottomLynxURL:;
- (id)bottomBarLynxURL;
- (void)setBottomBarLynxURL:;
- (id)headerBarLynxURL;
- (void)setHeaderBarLynxURL:;
- (id)bottomBarRawData;
- (void)setBottomBarRawData:;
- (id)headerBarRawData;
- (void)setHeaderBarRawData:;
- (void).cxx_destruct;
- (id)categoryInfo;
- (void)setCategoryInfo:;
- (id)tabInfo;
- (void)setTabInfo:;
+ (id)tabInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
