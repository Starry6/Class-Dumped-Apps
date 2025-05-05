@interface CLSTimeInterval : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDate startTime;
@property (nonatomic) double length;
- (void)setStartTime:;
- (id)initWithCoder:;
- (id)startTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)length;
- (id)dictionaryRepresentation;
- (void)setLength:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
