@interface HTSLiveFilterWord : IESLivePBBaseMessage
@property (nonatomic) NSString id_p;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
