@interface AWEMixVideoLogManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)recordMixVideoAutoPlayFinishWithIndex:nextIndex:model:nextModel:scene:logExtraDict:;
+ (void)recordMixVideoTappedLogWithIndex:expectedModel:expectedDataController:scene:logExtraDict:;
+ (void)recordConfigErrIfNeedWithModel:entranceModel:scene:;
+ (void)recordMixVideoSlideLogWithIndex:newIndex:directionTop:model:newModel:scene:logExtraDict:;
@end
