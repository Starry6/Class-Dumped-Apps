@interface IESLiveSaaSFeedCard : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackShow:view:;
- (void)cardStatusAction:;
- (void)customizingEnterMethodWithOriginalParams:customEnterMethod:;
- (void)enterRoom:navigationVC:view:params:;
- (id)genarateDoubleCardsWithModel:frame:params:sourceVC:navigationVC:delegate:;
- (void)getFeedCardWithData:frame:params:model:completion:;
- (void)getFeedCardWithJSON:frame:params:model:completion:;
- (void)getFeedCards:params:model:completion:;
- (void)listStatusAction:method:;
- (void)playStream:;
- (void)trackDuration:view:;
- (void)stopStream:;
@end
