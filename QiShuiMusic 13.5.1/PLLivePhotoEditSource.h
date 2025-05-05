@interface PLLivePhotoEditSource : PLEditSource
@property (nonatomic) PLEditSource photoEditSource;
@property (nonatomic) PLVideoEditSource videoEditSource;
- (void).cxx_destruct;
- (id)initWithPhotoSource:videoComplement:;
- (id)initWithSubstandardPhotoSource:videoComplement:;
- (id)_initWithPhotoSource:videoComplement:;
- (id)photoEditSource;
- (id)videoEditSource;
+ (id)livePhotoSourceWithPhotoURL:videoComplementURL:;
@end
