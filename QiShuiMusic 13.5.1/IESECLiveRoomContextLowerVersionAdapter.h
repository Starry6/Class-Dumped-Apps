@interface IESECLiveRoomContextLowerVersionAdapter : IESECLiveLowerVersionAdapter
@property (nonatomic) <IESECLiveRoomContext> target;
@property (nonatomic) BOOL isAdRoom;
@property (nonatomic) BOOL shouldPassThrougnParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAdRoom;
- (void)setIsAdRoom:;
- (void)setShouldPassThrougnParams:;
- (BOOL)shouldPassThrougnParams;
@end
