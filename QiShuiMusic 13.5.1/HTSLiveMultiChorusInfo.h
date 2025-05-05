@interface HTSLiveMultiChorusInfo : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array userIdsArray;
@property (nonatomic) Q userIdsArray_Count;
@property (nonatomic) q leaderUserId;
@property (nonatomic) q songId;
@property (nonatomic) NSInteger songType;
@property (nonatomic) GPBInt64ObjectDictionary userBaseMap;
@property (nonatomic) Q userBaseMap_Count;
@property (nonatomic) NSString chorusId;
+ (id)descriptor;
@end
