@interface BDImageShouldProcessInfo : NSObject
@property (nonatomic) {CGSize=dd} sizeLimit;
@property (nonatomic) Q memoryLimit;
@property (nonatomic) BOOL shouldDecodeImage;
- (BOOL)isEmptyDownSampleInfo;
- (void)setShouldDecodeImage:;
- (BOOL)shouldDecodeImage;
- (id)init;
- (id)sizeLimit;
- (void)setMemoryLimit:;
- (unsigned long long)memoryLimit;
- (void)setSizeLimit:;
@end
