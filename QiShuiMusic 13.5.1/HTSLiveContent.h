@interface HTSLiveContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString content;
@property (nonatomic) NSMutableArray avatarArray;
@property (nonatomic) Q avatarArray_Count;
+ (id)descriptor;
@end
