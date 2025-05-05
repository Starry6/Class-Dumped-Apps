@interface IESLiveDefaultGiftRecipientFragment : IESLiveRoomComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)componentBindService;
- (void)componentMount;
- (void)messageReceived:;
+ (BOOL)componentShouldActive:;
@end
