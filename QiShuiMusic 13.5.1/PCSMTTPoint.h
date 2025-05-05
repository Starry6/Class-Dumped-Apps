@interface PCSMTTPoint : NSObject
@property (nonatomic) PCSMTT mtt;
@property (nonatomic) NSDate start;
@property (nonatomic) NSString name;
@property (nonatomic) double time;
@property (nonatomic) BOOL success;
- (void)setStart:;
- (void)setName:;
- (double)time;
- (id)start;
- (id)initWithCoder:;
- (BOOL)success;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)jsonDict;
- (void)complete:;
- (id)initWithMTT:name:;
- (void)complete:time:;
- (id)mtt;
- (void)setMtt:;
+ (BOOL)supportsSecureCoding;
@end
