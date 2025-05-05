@interface PLLocalCreationDateCreator : NSObject
@property (nonatomic) PFTimeZoneLookup timeZoneLookup;
- (id)initWithTimeZoneLookup:;
- (id)timeZoneLookup;
- (void).cxx_destruct;
- (id)generateInferredTimeZoneOffsetForAsset:;
+ (id)_gmtTranslationDictionary;
@end
