@interface HTSLiveGroupLiveContainerData : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) q priority;
@property (nonatomic) NSString containerPayload;
@property (nonatomic) NSString position;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString foldURL;
@property (nonatomic) NSString horizontalURL;
@property (nonatomic) BOOL isFlowMode;
+ (id)descriptor;
@end
