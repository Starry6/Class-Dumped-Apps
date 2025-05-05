@interface SGEventActivity : NSObject
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) C type;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) double validStartDate;
@property (nonatomic) double validEndDate;
- (id)teamIdentifier;
- (id)jsonObject;
- (id)initWithDictionary:;
- (unsigned char)type;
- (double)validStartDate;
- (void).cxx_destruct;
- (id)userActivity;
- (id)initWithTeamIdentifier:type:userActivity:validStartDate:validEndDate:;
- (double)validEndDate;
+ (id)describeType:;
+ (unsigned char)typeForString:;
@end
