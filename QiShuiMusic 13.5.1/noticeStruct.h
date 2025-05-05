@interface noticeStruct : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray valueArray;
@property (nonatomic) Q valueArray_Count;
+ (id)descriptor;
@end
