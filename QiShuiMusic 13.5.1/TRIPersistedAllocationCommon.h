@interface TRIPersistedAllocationCommon : TRIPBMessage
@property (nonatomic) I type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) TRIPBTimestamp timestamp;
@property (nonatomic) BOOL hasTimestamp;
+ (id)descriptor;
@end
