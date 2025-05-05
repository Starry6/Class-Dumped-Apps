@interface CARConnectionSession : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) NSUUID sessionIdentifier;
@property (nonatomic) NSString transportType;
- (id)sessionIdentifier;
- (id)transportType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)events;
- (id)initWithEvents:sessionIdentifier:transportType:;
- (id)allEventsOfTypes:;
+ (BOOL)supportsSecureCoding;
@end
