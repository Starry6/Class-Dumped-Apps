@interface DAMoveResponse : NSObject
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString sourceID;
@property (nonatomic) NSString destID;
@property (nonatomic) DAMessageMoveRequest origRequest;
- (void)setSourceID:;
- (void)setStatus:;
- (id)sourceID;
- (void).cxx_destruct;
- (id)description;
- (int)status;
- (id)destID;
- (id)initWithStatus:sourceID:destID:;
- (void)setDestID:;
- (id)origRequest;
- (void)setOrigRequest:;
@end
