@interface BDUGLuckySchemaProxyTimeTable : BDUGLuckyBDModel
@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (nonatomic) NSString targetSchema;
- (double)endTimeMs;
- (void)setEndTimeMs:;
- (void)setTargetSchema:;
- (id)targetSchema;
- (void).cxx_destruct;
- (double)startTimeMs;
- (void)setStartTimeMs:;
+ (id)modelCustomPropertyMapper;
@end
