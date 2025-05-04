@interface AWEHPChannelBubbleAbilityImpl : AWEHPChannelBaseAbilityImpl
@property (nonatomic) <AWEHPChannelBubbleAbilityImpl> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showBottomTabItemBubbleWithModel:showCallback:clickCallback:dismissCallback:;
- (void)cancelBottomTabItemBubble;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
@end
