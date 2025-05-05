@interface HTSLiveMyInteractTab : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
@property (nonatomic) HTSLiveMyInteractTab_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
