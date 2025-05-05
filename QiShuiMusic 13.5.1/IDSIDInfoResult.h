@interface IDSIDInfoResult : NSObject
@property (nonatomic) NSString uri;
@property (nonatomic) q status;
@property (nonatomic) NSArray endpoints;
@property (nonatomic) IDSIDKTData ktData;
@property (nonatomic) IDSGameCenterData gameCenterData;
- (id)uri;
- (id)endpoints;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)gameCenterData;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithURI:status:endpoints:ktData:gameCenterData:;
- (id)ktData;
+ (BOOL)supportsSecureCoding;
@end
