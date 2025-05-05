@interface HTSLiveSelfDisciplineInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray targetListArray;
@property (nonatomic) Q targetListArray_Count;
@property (nonatomic) NSString currentTarget;
@property (nonatomic) NSString targetIconUri;
@property (nonatomic) NSString text;
@property (nonatomic) q punchDuration;
@property (nonatomic) NSString roomPunchCount;
@property (nonatomic) q version;
+ (id)descriptor;
@end
