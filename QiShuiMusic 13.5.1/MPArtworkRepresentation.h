@interface MPArtworkRepresentation : NSObject
@property (nonatomic) q kind;
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL imagePrepared;
@property (nonatomic) AVAsset video;
@property (nonatomic) {CGSize=dd} representationSize;
@property (nonatomic) @ representationToken;
@property (nonatomic) NSString visualIdenticalityStringRepresentation;
- (id)debugQuickLookObject;
- (void)setKind:;
- (id)representationWithPreparedImage:;
- (long long)kind;
- (void)setRepresentationToken:;
- (void)setImage:;
- (void)setImagePrepared:;
- (id)representationToken;
- (id)visualIdenticalityStringRepresentation;
- (BOOL)isImagePrepared;
- (void).cxx_destruct;
- (void)setVideo:;
- (void)setRepresentationSize:;
- (id)video;
- (id)image;
- (id)representationSize;
+ (id)representationWithSize:image:;
+ (id)representationWithSize:video:;
+ (id)representationForVisualIdentity:withSize:image:;
+ (id)representationForVisualIdentity:withSize:video:;
@end
