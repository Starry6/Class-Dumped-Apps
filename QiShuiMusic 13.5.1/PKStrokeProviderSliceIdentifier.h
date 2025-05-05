@interface PKStrokeProviderSliceIdentifier : NSObject
@property (nonatomic) NSUUID strokeUUID;
@property (nonatomic) double tStart;
@property (nonatomic) double tEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUUID:tStart:tEnd:;
- (id)strokeUUID;
- (double)tStart;
- (double)tEnd;
+ (BOOL)supportsSecureCoding;
@end
