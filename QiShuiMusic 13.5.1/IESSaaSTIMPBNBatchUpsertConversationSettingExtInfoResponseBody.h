@interface IESSaaSTIMPBNBatchUpsertConversationSettingExtInfoResponseBody : GPBMessage
@property (nonatomic) NSMutableArray successSettingInfosArray;
@property (nonatomic) Q successSettingInfosArray_Count;
@property (nonatomic) GPBInt64Array failConversationShortIdsArray;
@property (nonatomic) Q failConversationShortIdsArray_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
+ (id)descriptor;
@end
