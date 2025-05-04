@interface AWEStickerPickerControllerSliderPluginCacheHelper : NSObject
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString kEffectIDs;
- (void)cacheEffectId:withBeautyValue:filterValue:;
- (id)getCachedFilterValueForEffectId:;
- (id)getCachedBeautyValueForEffectId:;
- (id)getCachedEffectIDs;
- (id)getCachedBeautyFilterDictForEffectId:;
- (id)generateKeyForEffectID:;
- (void)cacheEffectIDsWithAppendId:;
- (id)kEffectIDs;
- (void)setKEffectIDs:;
- (id)prefix;
- (void)setPrefix:;
- (id)description;
- (void).cxx_destruct;
@end
