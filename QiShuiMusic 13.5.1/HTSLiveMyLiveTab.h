@interface HTSLiveMyLiveTab : IESLivePBBaseMessage
@property (nonatomic) NSString bizName;
@property (nonatomic) NSString title;
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
@property (nonatomic) HTSLiveMyLiveTab_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
