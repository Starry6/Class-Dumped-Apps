@interface IESLiveIMPayloadDecompressor : NSObject
@property (nonatomic) NSData zstdDictData;
@property (nonatomic) NSString zstdDictVersion;
@property (nonatomic) <IESLiveIMDecoder> nextDecoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNextDecoder:;
- (id)zstdDictVersion;
- (void)decode:completion:;
- (id)nextDecoder;
- (void)setZstdDictData:;
- (void)setZstdDictVersion:;
- (id)zstdDictData;
- (void).cxx_destruct;
@end
