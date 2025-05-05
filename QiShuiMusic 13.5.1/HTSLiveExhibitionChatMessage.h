@interface HTSLiveExhibitionChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSInteger unlightedItem;
@property (nonatomic) NSInteger lightedItem;
@property (nonatomic) NSInteger bizType;
@property (nonatomic) NSInteger appId;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
