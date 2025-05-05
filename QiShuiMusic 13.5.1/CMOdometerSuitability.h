@interface CMOdometerSuitability : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDate startDate;
@property (nonatomic) BOOL suitableForRunning;
@property (nonatomic) BOOL suitableForWalking;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithBinarySampleRepresentation:metadata:timestamp:;
- (id)binarySampleRepresentation;
- (id)initWithStartDate:suitableForRunning:suitableForWalking:;
- (BOOL)suitableForRunning;
- (BOOL)suitableForWalking;
+ (BOOL)supportsSecureCoding;
@end
