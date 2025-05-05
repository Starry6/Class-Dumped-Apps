@interface CARConnectionEvent : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString transportType;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDate eventDate;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) q eventType;
- (id)eventDate;
- (id)payload;
- (id)initWithDictionary:;
- (id)identifier;
- (id)transportType;
- (long long)eventType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)eventName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEventName:type:date:payload:;
+ (id)eventWithName:type:date:payload:;
+ (BOOL)supportsSecureCoding;
@end
