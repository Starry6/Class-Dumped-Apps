@interface DTFLogIndex : NSObject
@property (nonatomic) c flag;
@property (nonatomic) Q offset;
@property (nonatomic) Q length;
@property (nonatomic) double time;
@property (nonatomic) DTFLogFile file;
- (char)flag;
- (void)setOffset:;
- (void)setTime:;
- (id)uniqueId;
- (double)time;
- (void)setFile:;
- (unsigned long long)offset;
- (id)file;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)length;
- (void)setLength:;
- (void)setFlag:;
@end
