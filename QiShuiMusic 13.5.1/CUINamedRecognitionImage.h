@interface CUINamedRecognitionImage : CUINamedLookup
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) {CGSize=dd} physicalSizeInMeters;
@property (nonatomic) NSInteger exifOrientation;
- (int)exifOrientation;
- (id)initWithName:usingRenditionKey:fromTheme:;
- (id)image;
- (id)physicalSizeInMeters;
@end
