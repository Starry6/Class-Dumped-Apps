@interface IESImgNNProcessor : IESImgProcessBaseImpl
@property (nonatomic) IESProcessConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isInitFinished;
- (void)Net_Forward:completetion:;
- (BOOL)isNeedsImageSR:;
- (id)init;
- (void)dealloc;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
