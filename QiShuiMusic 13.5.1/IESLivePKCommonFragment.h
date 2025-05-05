@interface IESLivePKCommonFragment : IESLiveRoomComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)messageReceived:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
