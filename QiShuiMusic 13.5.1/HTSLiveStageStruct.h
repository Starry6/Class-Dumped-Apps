@interface HTSLiveStageStruct : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString iconURLLock;
@property (nonatomic) NSString iconURLUnlock;
@property (nonatomic) q type;
@property (nonatomic) q subType;
@property (nonatomic) q unlockCount;
@property (nonatomic) HTSLiveHiddenGiftExtra giftExtra;
@property (nonatomic) BOOL hasGiftExtra;
@property (nonatomic) HTSLiveShootExtra shootExtra;
@property (nonatomic) BOOL hasShootExtra;
@property (nonatomic) HTSLivePosterExtra posterExtra;
@property (nonatomic) BOOL hasPosterExtra;
+ (id)descriptor;
@end
