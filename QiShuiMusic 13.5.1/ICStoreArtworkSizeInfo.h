@interface ICStoreArtworkSizeInfo : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray supportedSizes;
@property (nonatomic) BOOL hasMaxSupportedSize;
@property (nonatomic) {CGSize=dd} maxSupportedSize;
- (void)setMaxSupportedSize:;
- (void)setType:;
- (unsigned long long)hash;
- (void)setHasMaxSupportedSize:;
- (id)supportedSizes;
- (void)setSupportedSizes:;
- (BOOL)hasMaxSupportedSize;
- (id)maxSupportedSize;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
