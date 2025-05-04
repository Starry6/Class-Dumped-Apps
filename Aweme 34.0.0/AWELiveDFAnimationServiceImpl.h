@interface AWELiveDFAnimationServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createAvatorScale:;
- (id)createAvatorAlpha:uiSimplify:;
- (void)DF_AddDiggAnimToView:controlPoints:switchAvator:uiSimplifyLevel:completion:avatorBlock:;
- (void)DF_playAvatorIconChangeAnimBorderLayer:avatorLayer:iconLayer:beginTime:uiSimplify:;
- (id)init;
@end
