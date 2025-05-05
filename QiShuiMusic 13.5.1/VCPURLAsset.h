@interface VCPURLAsset : VCPAsset
- (long long)mediaType;
- (id)scenes;
- (id)modificationDate;
- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)movie;
- (id)mainFileURL;
- (id)initWithImageURL:isSDOF:;
- (id)exif;
- (id)imageWithPreferredDimension:;
- (id)imageWithPreferredDimension:orientation:;
- (float)photoOffsetSeconds;
- (id)initWithImageURL:andMovieURL:;
- (float)originalPhotoOffsetSeconds;
- (id)initWithMovieURL:;
- (float)slowmoRate;
- (id)slomoRange;
- (BOOL)isMovieResourceLocalAvailable;
- (id)originalMovie;
+ (id)imageAssetWithURL:;
+ (id)sdofImageAssetWithURL:;
+ (id)livePhotoAssetWithImageURL:andMovieURL:;
+ (id)movieAssetWithURL:;
@end
