@interface IESLiveGroupHeaderInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString goods;
@property (nonatomic) NSString sale;
@property (nonatomic) NSString URL;
@property (nonatomic) NSMutableArray iconsArray;
@property (nonatomic) Q iconsArray_Count;
+ (id)descriptor;
@end
