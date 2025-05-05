@interface AVAssetVariantAudioAttributes : NSObject
@property (nonatomic) NSArray formatIDs;
- (void)dealloc;
- (id)description;
- (id)formatIDs;
- (id)initWithFigAlternateObjC:;
- (id)renditionSpecificAttributesForMediaOption:;
@end
