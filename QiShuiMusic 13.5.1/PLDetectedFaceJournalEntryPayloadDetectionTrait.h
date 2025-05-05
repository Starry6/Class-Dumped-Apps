@interface PLDetectedFaceJournalEntryPayloadDetectionTrait : NSObject
@property (nonatomic) s type;
@property (nonatomic) s value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) NSDictionary payloadAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)score;
- (double)startTime;
- (short)type;
- (void).cxx_destruct;
- (id)description;
- (short)value;
- (double)duration;
- (id)initWithPayloadAttributes:;
- (id)payloadAttributes;
@end
