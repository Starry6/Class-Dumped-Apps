@interface HTSLiveGiftBaseStruct : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger diamondCount;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger bizType;
+ (id)descriptor;
@end
