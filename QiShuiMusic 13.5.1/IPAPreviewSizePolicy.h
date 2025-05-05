@interface IPAPreviewSizePolicy : NSObject
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString name;
- (id)suffix;
- (void).cxx_destruct;
- (void)setSuffix:;
- (id)description;
- (id)name;
- (id)style;
- (id)transformSize:;
- (id)integralTransformSize:;
- (id)initWithName:style:sizePolicy:styleNeededThreshold:styleProducedThreshold:;
- (id)initWithName:suffix:style:sizePolicy:styleNeededThreshold:styleProducedThreshold:;
- (id)sizeTransformationPolicy;
- (BOOL)styleIsNeededForFullSize:;
- (BOOL)styleCanBeProducedFromSize:;
- (id)styleShouldBeProducedFrom:;
@end
