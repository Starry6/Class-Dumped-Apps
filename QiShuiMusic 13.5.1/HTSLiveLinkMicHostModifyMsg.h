@interface HTSLiveLinkMicHostModifyMsg : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) GPBInt64Array hostUidsArray;
@property (nonatomic) Q hostUidsArray_Count;
+ (id)descriptor;
@end
