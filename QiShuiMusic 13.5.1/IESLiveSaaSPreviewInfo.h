@interface IESLiveSaaSPreviewInfo : IESLiveSaaSDynamicModel
@property (nonatomic) NSString urlStr;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) @? renderBlock;
@property (nonatomic) double loadingTime;
@property (nonatomic) double renderTime;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
- (id)initWithFrame:roomID:renderBlock:;
- (id)initWithFrame:roomModel:renderBlock:;
- (id)initWithFrame:roomModel:roomID:urlStr:renderBlock:;
- (id)initWithFrame:urlStr:renderBlock:;
- (id)roomModel;
- (void)setRoomModel:;
- (void)setUrlStr:;
- (id)urlStr;
- (id)renderBlock;
- (void).cxx_destruct;
- (id)initialFrame;
- (void)setInitialFrame:;
- (id)roomID;
@end
