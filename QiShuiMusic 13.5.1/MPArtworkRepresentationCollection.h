@interface MPArtworkRepresentationCollection : NSObject
@property (nonatomic) MPArtworkRepresentation imageRepresentation;
@property (nonatomic) MPArtworkRepresentation videoRepresentation;
@property (nonatomic) Q bestRepresentationKinds;
- (void)setBestRepresentationKinds:;
- (void)setVideoRepresentation:;
- (unsigned long long)bestRepresentationKinds;
- (void)resetForRepresentationKinds:;
- (BOOL)isBestRepresentationForKind:;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (void)setImageRepresentation:;
- (id)videoRepresentation;
+ (id)collectionWithImageRepresentation:videoRepresentation:;
+ (id)collectionWithImageRepresentation:videoRepresentation:bestRepresentationKinds:;
@end
