@interface AWEShareRedPacketBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithRedPacket:onViewController:;
- (id)contextWithRedPacket:;
@end
