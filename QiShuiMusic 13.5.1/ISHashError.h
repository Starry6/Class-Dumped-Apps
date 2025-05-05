@interface ISHashError : NSObject
@property (nonatomic) NSString actualHashString;
@property (nonatomic) NSString expectedHashString;
@property (nonatomic) q rangeEnd;
@property (nonatomic) q rangeStart;
@property (nonatomic) NSString hashFailureHeaderString;
- (void)dealloc;
- (long long)rangeStart;
- (id)copyWithZone:;
- (void)setRangeStart:;
- (long long)rangeEnd;
- (id)hashFailureHeaderString;
- (id)actualHashString;
- (void)setActualHashString:;
- (id)expectedHashString;
- (void)setExpectedHashString:;
- (void)setRangeEnd:;
@end
