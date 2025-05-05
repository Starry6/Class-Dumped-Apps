@interface FigBiomeStreamEvent : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)payload;
- (void)dealloc;
- (id)bundleId;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)serialize;
- (id)initWithTimestamp:bundleId:payload:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
