@interface IESLiveDIIsolation : NSObject
@property (nonatomic) NSSet liveServices;
@property (nonatomic) NSNumber canEnterMultiInstanceRoom;
- (BOOL)containService:;
- (id)canEnterMultiInstanceRoom;
- (id)liveServices;
- (void)setCanEnterMultiInstanceRoom:;
- (void)setLiveServices:;
- (void).cxx_destruct;
@end
