@interface BDBlurHashConfig : NSObject
@property (nonatomic) NSString blurHash;
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) NSInteger punch;
- (id)blurHash;
- (void)setBlurHash:;
- (id)init;
- (void)setTargetSize:;
- (id)targetSize;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (int)punch;
- (void)setPunch:;
@end
