@interface BDPrivacyPolicy : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString dataType;
@property (nonatomic) NSString statement;
@property (nonatomic) NSString version;
- (id)initWithUUID:dataType:statement:version:;
- (void)setDataType:;
- (id)statement;
- (void)setStatement:;
- (void)setVersion:;
- (id)uuid;
- (id)version;
- (void)setUuid:;
- (id)dataType;
- (id)initWithDict:;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
