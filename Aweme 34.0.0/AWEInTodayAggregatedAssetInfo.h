@interface AWEInTodayAggregatedAssetInfo : MTLModel
@property (nonatomic) NSString assetType;
@property (nonatomic) NSArray tempFilePaths;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAssetType:localIdentifier:tempFilePath:createTime:;
- (id)tempFilePaths;
- (id)createTime;
- (id)localIdentifier;
- (void).cxx_destruct;
- (id)assetType;
+ (id)JSONKeyPathsByPropertyKey;
@end
