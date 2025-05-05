@interface BDUGBsyncPayload : GPBMessage
@property (nonatomic) NSInteger business;
@property (nonatomic) BOOL hasBusiness;
@property (nonatomic) NSInteger consumeType;
@property (nonatomic) BOOL hasConsumeType;
@property (nonatomic) NSString md5;
@property (nonatomic) BOOL hasMd5;
@property (nonatomic) NSData data_p;
@property (nonatomic) BOOL hasData_p;
- (int)consumeType;
- (int)business;
+ (id)descriptor;
@end
