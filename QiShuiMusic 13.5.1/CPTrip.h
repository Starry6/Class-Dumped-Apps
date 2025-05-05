@interface CPTrip : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) MKMapItem origin;
@property (nonatomic) MKMapItem destination;
@property (nonatomic) NSArray routeChoices;
@property (nonatomic) @ userInfo;
- (id)init;
- (id)userInfo;
- (id)identifier;
- (id)destination;
- (id)initWithCoder:;
- (id)origin;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)initWithOrigin:destination:routeChoices:;
- (id)routeChoices;
+ (BOOL)supportsSecureCoding;
@end
