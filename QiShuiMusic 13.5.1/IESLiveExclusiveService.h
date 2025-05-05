@interface IESLiveExclusiveService : NSObject
@property (nonatomic) NSArray exclusiveCases;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isOpen:;
- (void)addAExclusiveCase:forCase:;
- (BOOL)canOpenCase:toastContentArray:isShowTopToast:;
- (BOOL)canOpenCaseWithOneExclusiveCase:forCase:toastContentString:;
- (BOOL)canOpenCaseWithToastArray:forCase:;
- (BOOL)canOpenCaseWithoutExclusiveCase:;
- (BOOL)canOpenKTVWithoutExclusiveCase;
- (void)didSetAttachingDIContext;
- (id)exclusiveCases;
- (BOOL)isEscapeConditionWithCase:exclusiveCase:;
- (BOOL)isExclusiveWithA:B:;
- (void)operateExclusiveCase:forCase:isExclusive:;
- (int)p_getKWithi:j:;
- (BOOL)p_isAudioSceneSupportInteractiveKTV;
- (BOOL)p_isSupportedInteractiveKTV;
- (void)removeAExclusiveCase:forCase:;
- (void)setExclusiveCases:;
- (long long)whichExclusiveCaseOpen:;
- (void).cxx_destruct;
@end
