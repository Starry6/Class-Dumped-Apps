@interface IESLiveRedEnvelopeSmallSkinModel : NSObject
@property (nonatomic) q boxId;
@property (nonatomic) HTSLiveImage waitIcon;
@property (nonatomic) HTSLiveImage outNoMoreWebp;
@property (nonatomic) <IESLiveWebPDecoder> outNoMoreWebpDecoder;
@property (nonatomic) HTSLiveImage outWithMoreWebp;
@property (nonatomic) <IESLiveWebPDecoder> outWithMoreWebpDecoder;
@property (nonatomic) HTSLiveImage enterSkin;
- (id)outWithMoreWebp;
- (long long)boxId;
- (id)enterSkin;
- (id)outNoMoreWebp;
- (id)outNoMoreWebpDecoder;
- (id)outWithMoreWebpDecoder;
- (void)setBoxId:;
- (void)setEnterSkin:;
- (void)setOutNoMoreWebp:;
- (void)setOutNoMoreWebpDecoder:;
- (void)setOutWithMoreWebp:;
- (void)setOutWithMoreWebpDecoder:;
- (void)setWaitIcon:;
- (id)waitIcon;
- (void).cxx_destruct;
@end
