@interface AWEECPhotoSearchLynxPreloadSceneConfig : MTLModel
@property (nonatomic) NSArray searchEntranceList;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSArray cellConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchEntranceList;
- (void)setSearchEntranceList:;
- (id)cellConfigs;
- (void)setCellConfigs:;
- (BOOL)isDefault;
- (void)setIsDefault:;
- (void).cxx_destruct;
+ (id)cellConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
