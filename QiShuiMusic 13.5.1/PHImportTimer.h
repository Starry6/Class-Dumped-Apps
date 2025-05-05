@interface PHImportTimer : NSObject
@property (nonatomic) @ uuid;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) C type;
@property (nonatomic) C subtype;
@property (nonatomic) Q signpostId;
- (unsigned char)subtype;
- (void)start;
- (id)uuid;
- (void)setStartTime:;
- (void)setType:;
- (void)setSubtype:;
- (void)stop;
- (void)setUuid:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (unsigned char)type;
- (void)setSignpostId:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)signpostId;
- (double)duration;
- (id)initWithType:subtype:;
@end
