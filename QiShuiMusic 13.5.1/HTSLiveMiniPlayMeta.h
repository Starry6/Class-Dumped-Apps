@interface HTSLiveMiniPlayMeta : IESLivePBBaseMessage
@property (nonatomic) NSString schema;
@property (nonatomic) NSString gameName;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString appId;
@property (nonatomic) GPBInt64Array supportLiveSceneArray;
@property (nonatomic) Q supportLiveSceneArray_Count;
@property (nonatomic) NSString version;
@property (nonatomic) NSInteger gameType;
@property (nonatomic) NSString developer;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
