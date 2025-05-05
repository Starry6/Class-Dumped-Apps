@interface CMWorkoutMetsData : NSObject
@property (nonatomic) NSNumber mets;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSUUID sessionId;
@property (nonatomic) NSUUID sourceId;
- (id)sessionId;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (id)mets;
- (id)initWithCLWorkoutMets:;
- (id)initWithSessionId:sourceId:startDate:endDate:mets:;
+ (BOOL)supportsSecureCoding;
@end
