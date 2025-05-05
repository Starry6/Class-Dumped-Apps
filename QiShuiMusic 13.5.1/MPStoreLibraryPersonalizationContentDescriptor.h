@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject
@property (nonatomic) MPModelObject model;
@property (nonatomic) q personalizationStyle;
- (id)model;
- (long long)personalizationStyle;
- (id)initWithModel:personalizationStyle:;
- (void).cxx_destruct;
- (id)description;
+ (id)_lightweightPersonalizationPropertiesForLyrics;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)lightweightPersonalizationPropertiesForModelClass:;
@end
