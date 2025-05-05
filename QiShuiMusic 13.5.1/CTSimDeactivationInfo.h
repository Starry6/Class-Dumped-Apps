@interface CTSimDeactivationInfo : NSObject
@property (nonatomic) NSString homePlmn;
@property (nonatomic) NSArray events;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString homePlmn;
@property (nonatomic) NSMutableArray events;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (id)description;
- (BOOL)isEqual:;
- (id)homePlmn;
- (void)setHomePlmn:;
+ (BOOL)supportsSecureCoding;
@end
