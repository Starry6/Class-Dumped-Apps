@interface IESLiveGiftAnimationSuperResolutionConfig : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) BOOL enableBMF;
@property (nonatomic) BOOL useBMF20;
- (BOOL)enableBMF;
- (unsigned long long)superResolutionTriggerTypeWithEffectID:triggerBySelf:;
- (BOOL)useBMF20;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
