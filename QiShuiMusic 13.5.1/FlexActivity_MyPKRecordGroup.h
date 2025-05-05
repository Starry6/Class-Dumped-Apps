@interface FlexActivity_MyPKRecordGroup : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray recordsArray;
@property (nonatomic) Q recordsArray_Count;
+ (id)descriptor;
@end
