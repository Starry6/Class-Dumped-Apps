@interface NEDNSQuery : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q recordType;
@property (nonatomic) q recordClass;
@property (nonatomic) NSData answerData;
- (long long)recordType;
- (void).cxx_destruct;
- (id)name;
- (long long)recordClass;
- (id)initWithName:recordType:recordClass:;
- (id)answerData;
- (void)setAnswerData:;
@end
