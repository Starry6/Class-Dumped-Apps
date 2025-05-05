@interface HTSLiveInRoomBannerMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString extra;
@property (nonatomic) NSInteger position;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) NSString containerURL;
@property (nonatomic) NSString lynxContainerURL;
@property (nonatomic) NSInteger containerType;
@property (nonatomic) NSInteger opType;
+ (id)descriptor;
@end
