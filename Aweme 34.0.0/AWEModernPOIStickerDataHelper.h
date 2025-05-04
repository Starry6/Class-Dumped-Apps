@interface AWEModernPOIStickerDataHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSpecialEffect:;
+ (void)prefetchDefaultPOIStyleResourceIfNeeded;
+ (id)p_fetchDefaultFontFilePath;
+ (void)p_fetchDefaultEffectPath;
+ (id)basicEffectIds;
+ (id)commonEffectIds;
+ (id)standardEffectIds;
+ (id)p_dictTransferFromString:;
+ (id)p_RGBAArrayTransferFromColorString:;
+ (void)fetchEffectWithEffectIds:defaultIndex:completionBlock:;
+ (void)fetchEffectWithModel:completionBlock:;
+ (id)generateTextParamsWithPOIName:effectPath:effectModel:;
+ (id)optimizeTextParams:;
+ (void)saveBasicEffects:;
@end
