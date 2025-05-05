@interface IDSActivityInfo : NSObject
@property (nonatomic) NSArray deviceUniqueIDs;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSArray URIs;
@property (nonatomic) NSString subActivity;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSData appContext;
- (id)URIs;
- (id)initWithCoder:;
- (BOOL)isIdentical:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)tokens;
- (id)_initWithSubActivity:;
- (id)subActivity;
- (id)appContext;
- (void)setAppContext:;
- (id)deviceUniqueIDs;
+ (BOOL)supportsSecureCoding;
+ (id)activityInfoWithSubActivity:URIs:;
+ (id)activityInfoWithSubActivity:tokens:;
+ (id)activityInfoWithSubActivity:devices:;
@end
