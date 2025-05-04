@interface AWEOFGUser : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)requestSecurityPhoneNumber:enterMethod:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)requestTokenWithCarrier:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)getUserProfileWithID:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)getUserProfileWithID:detailCompletion:ofgClientKey:ofgAppID:ofgError:;
+ (id)sessionIDWithOfgClientKey:ofgAppID:ofgError:;
+ (id)currentLoginUserWithOfgClientKey:ofgAppID:ofgError:;
+ (BOOL)isLoginWithOfgClientKey:ofgAppID:ofgError:;
+ (id)userIDWithOfgClientKey:ofgAppID:ofgError:;
+ (id)getSecUidWithUid:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)recordSecUidWithUid:withSecUid:ofgClientKey:ofgAppID:ofgError:;
+ (id)deviceIDWithOfgClientKey:ofgAppID:ofgError:;
+ (id)installIDWithOfgClientKey:ofgAppID:ofgError:;
+ (id)commonURLParametersWithOfgClientKey:ofgAppID:ofgError:;
+ (BOOL)follow:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)unfollow:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)followWithUid:secUid:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)unfollowWithUid:secUid:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)requireLogin:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)requireLoginWithContext:completion:ofgClientKey:ofgAppID:ofgError:;
+ (void)commitFollowWithUid:secUid:type:ofgClientKey:completion:;
@end
