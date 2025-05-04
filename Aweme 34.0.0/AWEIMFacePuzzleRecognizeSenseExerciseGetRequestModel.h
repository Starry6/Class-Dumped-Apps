@interface AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel : AWEBaseApiModel
@property (nonatomic) NSString secExerciseUserId;
@property (nonatomic) NSString secExerciseId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) q conversationType;
@property (nonatomic) q serverMsgId;
@property (nonatomic) q exerciseGetSourceType;
- (long long)conversationType;
- (void)setConversationType:;
- (long long)conversationShortId;
- (void)setConversationShortId:;
- (long long)serverMsgId;
- (void)setServerMsgId:;
- (void)setSecExerciseUserId:;
- (void)setSecExerciseId:;
- (void)setExerciseGetSourceType:;
- (id)secExerciseId;
- (id)secExerciseUserId;
- (long long)exerciseGetSourceType;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
+ (id)conversationTypeJSONTransformer;
+ (id)conversationShortIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
