@interface CVMLObservation_LegacySupportDoNotChange : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:forKey:;
+ (BOOL)supportsSecureCoding;
@end
