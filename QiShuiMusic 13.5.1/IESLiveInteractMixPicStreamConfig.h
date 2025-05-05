@interface IESLiveInteractMixPicStreamConfig : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) q zOrder;
@property (nonatomic) q alpha;
@property (nonatomic) q renderMode;
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) q pts;
- (void)setBuffer:;
- (id)rect;
- (id)buffer;
- (id)identifier;
- (void)setAlpha:;
- (void)setRenderMode:;
- (long long)renderMode;
- (long long)alpha;
- (void)setRect:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (long long)pts;
- (long long)zOrder;
- (void)setZOrder:;
- (void)setPts:;
@end
