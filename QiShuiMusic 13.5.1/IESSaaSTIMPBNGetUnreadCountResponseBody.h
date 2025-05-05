@interface IESSaaSTIMPBNGetUnreadCountResponseBody : GPBMessage
@property (nonatomic) q totalUnreadCount;
@property (nonatomic) BOOL hasTotalUnreadCount;
@property (nonatomic) GPBInt64Int64Dictionary convUnreadCount;
@property (nonatomic) Q convUnreadCount_Count;
@property (nonatomic) GPBInt64Array failedConvListArray;
@property (nonatomic) Q failedConvListArray_Count;
+ (id)descriptor;
@end
