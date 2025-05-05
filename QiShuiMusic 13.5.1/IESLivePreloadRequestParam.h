@interface IESLivePreloadRequestParam : NSObject
@property (nonatomic) NSMutableDictionary insideParams;
@property (nonatomic) @ roomModel;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) NSDictionary otherParams;
- (void)addOtherObject:forKey:;
- (id)insideParams;
- (id)otherParams;
- (id)roomModel;
- (void)setEventContext:;
- (void)setInsideParams:;
- (void)setRoomModel:;
- (void).cxx_destruct;
- (id)eventContext;
@end
