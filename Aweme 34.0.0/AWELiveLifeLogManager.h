@interface AWELiveLifeLogManager : NSObject
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString roomTag;
@property (nonatomic) Q order;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomId;
- (void)setRoomId:;
- (id)roomTag;
- (void)setRoomTag:;
- (void)p_log:;
- (unsigned long long)order;
- (void).cxx_destruct;
- (void)setOrder:;
+ (void)updateRoomId:roomPosition:;
+ (void)log:params:;
+ (void)enterRoomWithRoomId:roomPosition:;
+ (void)exitRoom;
+ (BOOL)enable;
+ (void)logFormat:;
@end
