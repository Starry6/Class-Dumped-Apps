@interface PHUserFeedbackImportantPerson : NSObject
@property (nonatomic) NSString personUUID;
@property (nonatomic) Q type;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithPersonUUID:type:;
- (id)personUUID;
@end
