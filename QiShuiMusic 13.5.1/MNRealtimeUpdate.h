@interface MNRealtimeUpdate : NSObject
@property (nonatomic) NSUUID routeID;
@property (nonatomic) NSDate lastUpdated;
@property (nonatomic) NSError error;
- (id)routeID;
- (id)lastUpdated;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
