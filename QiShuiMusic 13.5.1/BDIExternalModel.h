@interface BDIExternalModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary requiredDependencies;
@property (nonatomic) NSDictionary filePath;
@property (nonatomic) NSDictionary size;
@property (nonatomic) NSDictionary signature;
@property (nonatomic) NSString matchRule;
@property (nonatomic) double startTime;
- (id)matchRule;
- (id)requiredDependencies;
- (void)setMatchRule:;
- (void)setRequiredDependencies:;
- (id)filePath;
- (void)setSignature:;
- (id)signature;
- (void)setName:;
- (void)setStartTime:;
- (void)setFilePath:;
- (double)startTime;
- (void)setValue:forUndefinedKey:;
- (void).cxx_destruct;
- (id)name;
- (void)setSize:;
- (id)size;
@end
