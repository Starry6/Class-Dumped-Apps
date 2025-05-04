@interface AWEVideoHallRequestModel : NSObject
@property (nonatomic) NSString entityId;
@property (nonatomic) q type;
@property (nonatomic) Q count;
@property (nonatomic) Q offset;
- (id)initWithEntityId:type:offset:;
- (void)setCount:;
- (void)setOffset:;
- (unsigned long long)offset;
- (unsigned long long)count;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)entityId;
- (void)setEntityId:;
@end
