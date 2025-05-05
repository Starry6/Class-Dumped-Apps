@interface HTSLiveOpenGeneralCarnivalSyncData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGeneralCarnivalMessage carnivalMessage;
@property (nonatomic) BOOL hasCarnivalMessage;
@property (nonatomic) q millSecondTimeStamp;
+ (id)descriptor;
@end
