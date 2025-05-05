@interface SUCoreErrorAttributes : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) q code;
@property (nonatomic) NSString codeName;
@property (nonatomic) q indications;
@property (nonatomic) NSString keyMatchTrue;
@property (nonatomic) NSDictionary keyMatchTrueMap;
- (id)keyMatchTrue;
- (void)setKeyMatchTrueMap:;
- (long long)code;
- (id)keyMatchTrueMap;
- (long long)indications;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)setKeyMatchTrue:;
- (void)setIndications:;
- (id)initForDomain:withCode:ofCodeName:indicating:ifKeyTrue:keyMatchTrueMap:;
- (id)codeName;
+ (id)nameForIndication:;
+ (id)descriptionForIndication:;
@end
