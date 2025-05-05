@interface PLPersistedDetectionTraitMetadata : NSObject
@property (nonatomic) s type;
@property (nonatomic) s value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)score;
- (void)setStartTime:;
- (void)setType:;
- (id)initWithCoder:;
- (double)startTime;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (short)type;
- (void)setScore:;
- (id)jsonDictionary;
- (short)value;
- (double)duration;
+ (BOOL)supportsSecureCoding;
+ (id)_persistedDetectionTraitMetadataWithDetectionTrait:;
@end
