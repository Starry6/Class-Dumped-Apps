@interface PLTableThumbnailEncoderResult : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSData ktxData;
@property (nonatomic) NSData ktxHeaderData;
@property (nonatomic) NSData imageData;
@property (nonatomic) {PLImageTableEntryFooter_s={?=CCCCCCCCCCCCCCCC}IIi} tableFooter;
@property (nonatomic) PLImageFormat imageFormat;
- (id)imageData;
- (id)uuid;
- (void)setUuid:;
- (id)ktxHeaderData;
- (id)_ktxHeader;
- (id)tableFooter;
- (id)initWithKtxData:uuid:format:;
- (unsigned long long)imageDataLength;
- (id)entryDataForEntryLength:;
- (void).cxx_destruct;
- (id)ktxData;
- (id)imageFormat;
+ (unsigned long long)_minKtxDataLengthFromImageSize:;
@end
