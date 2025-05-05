@interface TRIPBEnumDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSMutableArray valueArray;
@property (nonatomic) Q valueArray_Count;
@property (nonatomic) TRIPBEnumOptions options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) NSMutableArray reservedRangeArray;
@property (nonatomic) Q reservedRangeArray_Count;
@property (nonatomic) NSMutableArray reservedNameArray;
@property (nonatomic) Q reservedNameArray_Count;
+ (id)descriptor;
@end
