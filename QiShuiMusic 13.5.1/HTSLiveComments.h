@interface HTSLiveComments : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSMutableArray textsArray;
@property (nonatomic) Q textsArray_Count;
+ (id)descriptor;
@end
