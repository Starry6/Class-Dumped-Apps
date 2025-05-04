@interface AWEPayFaceLivenessAvatarService : NSObject
- (id)p_errorWithDescription:;
- (void)p_fetchAvatarResourceWithEffectID:completion:;
- (void)p_downloadEffectWithModel:completion:;
- (void)fetchAvatarResourceWithEffectID:completion:;
+ (id)sharedInstance;
@end
