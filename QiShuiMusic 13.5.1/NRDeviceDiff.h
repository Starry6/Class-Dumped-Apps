@interface NRDeviceDiff : NRDiffBase
@property (nonatomic) NRPBDeviceDiff protobuf;
- (id)initWithProtobuf:;
- (id)protobuf;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)allPropertyNames;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (id)diffPropertyDiffForName:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDiffPropertyDiffs:;
- (unsigned long long)count;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
