@interface AWELiveModuleServiceCommonAdaper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fastStartLivePanelViewStyle;
- (id)fastStartLiveEnterFrom;
- (void)fetchGiftListWithParams:completion:;
- (void)sendGiftWithParams:diamondCount:completion:;
- (void)trackSendGiftSuccessWithParams:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
