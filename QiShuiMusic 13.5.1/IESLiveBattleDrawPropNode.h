@interface IESLiveBattleDrawPropNode : NSObject
@property (nonatomic) HTSLiveImage animationResource;
@property (nonatomic) BOOL isGetBufferCard;
@property (nonatomic) BOOL needDropAnimation;
@property (nonatomic) q propId;
@property (nonatomic) NSString getType;
- (BOOL)isGetBufferCard;
- (id)animationResource;
- (BOOL)needDropAnimation;
- (long long)propId;
- (void)setAnimationResource:;
- (void)setGetType:;
- (void)setIsGetBufferCard:;
- (void)setNeedDropAnimation:;
- (void)setPropId:;
- (id)getType;
- (id)initWithMessage:;
- (void).cxx_destruct;
@end
