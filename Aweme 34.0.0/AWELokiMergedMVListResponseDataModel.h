@interface AWELokiMergedMVListResponseDataModel : ACCBaseApiModel
@property (nonatomic) NSString appId;
@property (nonatomic) NSString regionKey;
@property (nonatomic) q categoryID;
@property (nonatomic) NSString panelKey;
@property (nonatomic) NSString name;
@property (nonatomic) AWELokiMergedMVListResponseDataInfos dataInfos;
- (id)regionKey;
- (void)setRegionKey:;
- (id)panelKey;
- (id)dataInfos;
- (void)setPanelKey:;
- (void)setDataInfos:;
- (void)setCategoryID:;
- (id)appId;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)categoryID;
- (void)setAppId:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)categoriesJSONTransformer;
@end
