@interface CLSArchivedSurvey : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSArray archivedSurveySteps;
- (void)setType:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)initWithType:authorID:;
- (id)authorID;
- (void)setAuthorID:;
- (id)archivedSurveySteps;
- (void)addArchivedSurveyStep:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
