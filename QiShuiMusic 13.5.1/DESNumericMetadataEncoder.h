@interface DESNumericMetadataEncoder : NSObject
- (id)encodeString:toLength:;
- (id)encodeNumber:toLength:;
- (id)encodeStringVector:toLength:;
- (id)encodeNumberVector:toLength:;
- (id)zeroWithLength:;
@end
