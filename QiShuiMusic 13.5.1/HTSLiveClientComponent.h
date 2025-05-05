@interface HTSLiveClientComponent : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary portraitComponentMap;
@property (nonatomic) Q portraitComponentMap_Count;
@property (nonatomic) NSMutableDictionary landscapeComponentMap;
@property (nonatomic) Q landscapeComponentMap_Count;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) q templateId;
+ (id)descriptor;
@end
