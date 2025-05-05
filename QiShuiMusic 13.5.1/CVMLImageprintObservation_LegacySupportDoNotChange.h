@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (unsigned long long)serializeStateIntoData:startingAtByteOffset:error:;
- (unsigned long long)serializedLength;
- (id)serializeAsVNImageprintStateAndReturnError:;
+ (BOOL)supportsSecureCoding;
@end
