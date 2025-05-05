@interface HTSLiveShelfCardSupplementSyncData : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) q cardId;
@property (nonatomic) GPBInt32ObjectDictionary supplementMap;
@property (nonatomic) Q supplementMap_Count;
@property (nonatomic) NSString supplementCardMapStr;
+ (id)descriptor;
@end
