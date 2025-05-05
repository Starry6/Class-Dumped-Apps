@interface RTIDataPayload : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) Q version;
- (id)init;
- (id)data;
- (unsigned long long)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (BOOL)isEqual:;
- (id)initWithData:version:;
+ (BOOL)supportsSecureCoding;
+ (id)payloadWithData:;
+ (id)payloadWithData:version:;
@end
