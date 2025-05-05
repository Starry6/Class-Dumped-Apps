@interface IESImgProcessBaseImpl : NSObject
@property (nonatomic) IESProcessConfig config;
@property (nonatomic) BOOL isInitFinished;
@property (nonatomic) IESImgPreProcessor imgPreProcessor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imgPreProcessor;
- (void)Net_Forward:completetion:;
- (BOOL)isNeedsImageSR:;
- (id)imageDataFromUIImage:width:height:isNeedsPoster:;
- (BOOL)isInitFinished;
- (BOOL)isNeedsPostProcess:inH:;
- (id)processData:outNeedsProcess:outError:;
- (void)setImgPreProcessor:;
- (void)setIsInitFinished:;
- (id)init;
- (void)dealloc;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
