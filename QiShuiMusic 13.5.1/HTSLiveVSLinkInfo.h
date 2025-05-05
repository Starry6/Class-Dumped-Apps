@interface HTSLiveVSLinkInfo : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString tabTitle;
@property (nonatomic) NSMutableArray roomsArray;
@property (nonatomic) Q roomsArray_Count;
@property (nonatomic) NSInteger pattern;
+ (id)descriptor;
@end
