@interface TRIPBEnumValue : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger number;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
+ (id)descriptor;
@end
