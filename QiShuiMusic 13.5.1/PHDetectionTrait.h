@interface PHDetectionTrait : NSObject
@property (nonatomic) s type;
@property (nonatomic) s value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
- (double)score;
- (id)propertyListRepresentation;
- (double)startTime;
- (short)type;
- (id)initWithPropertyListRepresentation:;
- (short)value;
- (double)duration;
- (id)initWithType:value:score:startTime:duration:;
+ (id)detectionTraitsForDetection:;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:withDetectionTraitTypes:;
@end
