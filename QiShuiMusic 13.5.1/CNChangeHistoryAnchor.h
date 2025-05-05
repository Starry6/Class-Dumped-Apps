@interface CNChangeHistoryAnchor : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) q sequenceNumber;
- (id)initWithData:error:;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (long long)sequenceNumber;
- (id)description;
- (id)initWithSequenceNumber:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
