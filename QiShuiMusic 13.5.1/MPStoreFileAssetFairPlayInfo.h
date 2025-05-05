@interface MPStoreFileAssetFairPlayInfo : NSObject
@property (nonatomic) NSDictionary responseSinfDictionary;
@property (nonatomic) q identifier;
@property (nonatomic) NSData dpInfoData;
@property (nonatomic) NSData pinfData;
@property (nonatomic) NSData sinfData;
@property (nonatomic) NSData sinf2Data;
@property (nonatomic) NSDictionary purchaseBundleSinfDictionary;
- (long long)identifier;
- (void).cxx_destruct;
- (id)initWithResponseSinfDictionary:;
- (id)initWithiTunesCloudStoreFileAssetFairPlayInfo:;
- (id)responseSinfDictionary;
- (id)dpInfoData;
- (id)pinfData;
- (id)sinfData;
- (id)sinf2Data;
- (id)purchaseBundleSinfDictionary;
@end
