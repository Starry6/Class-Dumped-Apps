@interface NRDeviceCollectionDiff : NRDiffBase
@property (nonatomic) NRPBDeviceCollectionDiff protobuf;
- (id)initWithProtobuf:;
- (id)protobuf;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDeviceCollectionDiffDeviceDiffs:;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (id)allPairingIDs;
- (void).cxx_destruct;
- (id)description;
- (id)diffCollectionDiffForPairingID:;
- (unsigned long long)count;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
