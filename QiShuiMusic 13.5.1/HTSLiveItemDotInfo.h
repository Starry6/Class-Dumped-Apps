@interface HTSLiveItemDotInfo : IESLivePBBaseMessage
@property (nonatomic) NSString showPath;
@property (nonatomic) NSString showItemId;
@property (nonatomic) HTSLiveCommonDot dot;
@property (nonatomic) BOOL hasDot;
+ (id)descriptor;
@end
