@interface HTSLiveCarnivalMessage : IESLivePBBaseMessage
@property (nonatomic) BOOL isRedPacketEgg;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveCombinedText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) q carnivalSeqId;
@property (nonatomic) q danmakuStyleType;
@property (nonatomic) NSInteger specialMark;
@property (nonatomic) q priority;
- (BOOL)isRedPacketEgg;
- (void)setIsRedPacketEgg:;
+ (id)descriptor;
@end
