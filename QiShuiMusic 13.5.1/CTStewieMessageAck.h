@interface CTStewieMessageAck : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) q transportType;
- (void)setTransportType:;
- (id)init;
- (id)initWithError:;
- (void)setError:;
- (long long)transportType;
- (id)error;
- (id)initWithCoder:;
- (BOOL)success;
- (void)setSuccess:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToMessageAck:;
+ (BOOL)supportsSecureCoding;
@end
