@interface INSeat : NSObject
@property (nonatomic) NSString seatSection;
@property (nonatomic) NSString seatRow;
@property (nonatomic) NSString seatNumber;
@property (nonatomic) NSString seatingType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSeatSection:seatRow:seatNumber:seatingType:;
- (id)seatSection;
- (id)seatRow;
- (id)seatNumber;
- (id)seatingType;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
