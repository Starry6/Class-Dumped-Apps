@interface BDUGPc : NSObject
@property (nonatomic) NSMutableArray diffs;
@property (nonatomic) Q start1;
@property (nonatomic) Q start2;
@property (nonatomic) Q length1;
@property (nonatomic) Q length2;
- (unsigned long long)length1;
- (unsigned long long)length2;
- (void)setLength1:;
- (void)setLength2:;
- (void)setStart1:;
- (void)setStart2:;
- (unsigned long long)start1;
- (unsigned long long)start2;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:;
- (id)diffs;
- (void)setDiffs:;
@end
