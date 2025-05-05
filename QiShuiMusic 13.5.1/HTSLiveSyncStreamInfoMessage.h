@interface HTSLiveSyncStreamInfoMessage : IESLivePBBaseMessage
@property (nonatomic) q timestamp;
@property (nonatomic) NSString key;
@property (nonatomic) NSString info;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
+ (id)descriptor;
@end
