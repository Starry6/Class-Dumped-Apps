@interface SiriTTSService.TTSAssetTrialResourceAsset : SiriTTSService.TTSAssetTrialAsset
@property (nonatomic) TTSAssetType assetType;
@property (nonatomic) TTSAssetTechnology technology;
@property (nonatomic) TTSAssetQuality quality;
@property (nonatomic) NSString name;
@property (nonatomic) NSString identifier;
@property (nonatomic) q gender;
@property (nonatomic) NSNumber age;
@property (nonatomic) NSDictionary attributes;
- (id)assetType;
- (id)quality;
- (id)technology;
- (long long)gender;
- (id)age;
- (id)identifier;
- (id)attributes;
- (id)name;
@end
