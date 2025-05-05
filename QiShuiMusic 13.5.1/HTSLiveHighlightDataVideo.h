@interface HTSLiveHighlightDataVideo : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q videoPinId;
@property (nonatomic) NSString URL;
@property (nonatomic) q itemId;
@property (nonatomic) q itemType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString nickName;
@property (nonatomic) q msgId;
@property (nonatomic) q role;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
