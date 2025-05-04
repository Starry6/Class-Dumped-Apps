@interface AWERepoHDPhotoModel : NSObject
@property (nonatomic) BOOL useHDTakePicture;
@property (nonatomic) BOOL didTakeHDPicture;
@property (nonatomic) BOOL isEditHadApplied;
@property (nonatomic) NSString hdPhotoDraftPath;
@property (nonatomic) {CGSize=dd} hdPhotoSize;
@property (nonatomic) double hdPhotoScale;
- (BOOL)useHDTakePicture;
- (BOOL)didTakeHDPicture;
- (BOOL)isEditHadApplied;
- (id)hdPhotoDraftPath;
- (id)hdPhotoSize;
- (double)hdPhotoScale;
- (void)setIsEditHadApplied:;
- (void)setHdPhotoDraftPath:;
- (void)setHdPhotoSize:;
- (void)setHdPhotoScale:;
- (void)setUseHDTakePicture:;
- (void)setDidTakeHDPicture:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
