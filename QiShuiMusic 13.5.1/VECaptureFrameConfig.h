@interface VECaptureFrameConfig : NSObject
@property (nonatomic) {?=qiIq} atTime;
@property (nonatomic) BOOL useOriginColorSpace;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL needProcess;
@property (nonatomic) BOOL isLastImage;
@property (nonatomic) BOOL cancelLastRequest;
@property (nonatomic) BOOL isMV;
- (void)setNeedProcess:;
- (void)setIsLastImage:;
- (id)atTime;
- (BOOL)cancelLastRequest;
- (BOOL)isLastImage;
- (BOOL)isMV;
- (BOOL)needProcess;
- (void)setAtTime:;
- (void)setCancelLastRequest:;
- (void)setIsMV:;
- (void)setUseOriginColorSpace:;
- (BOOL)useOriginColorSpace;
- (void)setSize:;
- (id)size;
@end
