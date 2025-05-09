@interface AWEPOILiveFloatOnTopProvider : NSObject
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) UIViewController fromVC;
@property (nonatomic) NSString roomID;
@property (nonatomic) BOOL isAttaching;
@property (nonatomic) NSDictionary logExtraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDismissCompletion:;
- (void)setFromVC:;
- (id)fromVC;
- (id)targetVC;
- (void)setTargetVC:;
- (void)setMuteStateChangedBlock:;
- (void)muteLive:;
- (void)setCustomTapBlock:;
- (void)resumeSmallWindowStream;
- (void)setLogExtraData:;
- (id)logExtraData;
- (void)pauseSmallWindowStream;
- (void)returnSmallLiveToService;
- (void)clearSmallWindowActionBlock;
- (void)transferViewTo:;
- (void)muteLiveWindow:;
- (void)updateAttachingState:;
- (BOOL)isAttaching;
- (void)setIsAttaching:;
- (void)publishEventWithWindowTap;
- (void)attach;
- (id)roomID;
- (void)detach;
- (void).cxx_destruct;
- (void)setRoomID:;
+ (id)playLiveFloatOn:from:roomID:tag:logExtra:;
@end
