@interface HTSLiveRoomMessage : IESLivePBBaseMessage
@property (nonatomic) @ ieslive_redEnvelope;
@property (nonatomic) BOOL isRisky;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL supprotLandscape;
@property (nonatomic) NSInteger roomMessageType;
@property (nonatomic) BOOL systemTopMsg;
@property (nonatomic) BOOL forcedGuarantee;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) NSString bizScene;
@property (nonatomic) NSMutableDictionary buriedPoint;
@property (nonatomic) Q buriedPoint_Count;
- (BOOL)isRisky;
- (id)ieslive_redEnvelope;
- (void)setIeslive_redEnvelope:;
- (void)setIsRisky:;
+ (id)descriptor;
@end
