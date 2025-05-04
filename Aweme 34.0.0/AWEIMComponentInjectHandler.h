@interface AWEIMComponentInjectHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryTransferToMessageVCWithUid:fromVC:injectBlock:extDict:requestScene:completion:;
+ (id)sharedIntance;
+ (void)handleInjectIfNeedWithTargetVC:paramDict:;
+ (void)injectFormatContextWithTargetVC:paramDict:;
@end
