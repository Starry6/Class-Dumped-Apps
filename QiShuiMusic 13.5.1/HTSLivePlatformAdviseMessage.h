@interface HTSLivePlatformAdviseMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveText adviseText;
@property (nonatomic) BOOL hasAdviseText;
@property (nonatomic) q duration;
@property (nonatomic) q priority;
@property (nonatomic) NSMutableDictionary eventTracking;
@property (nonatomic) Q eventTracking_Count;
+ (id)descriptor;
@end
