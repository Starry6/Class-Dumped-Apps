@interface TRIPBDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSMutableArray fieldArray;
@property (nonatomic) Q fieldArray_Count;
@property (nonatomic) NSMutableArray extensionArray;
@property (nonatomic) Q extensionArray_Count;
@property (nonatomic) NSMutableArray nestedTypeArray;
@property (nonatomic) Q nestedTypeArray_Count;
@property (nonatomic) NSMutableArray enumTypeArray;
@property (nonatomic) Q enumTypeArray_Count;
@property (nonatomic) NSMutableArray extensionRangeArray;
@property (nonatomic) Q extensionRangeArray_Count;
@property (nonatomic) NSMutableArray oneofDeclArray;
@property (nonatomic) Q oneofDeclArray_Count;
@property (nonatomic) TRIPBMessageOptions options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) NSMutableArray reservedRangeArray;
@property (nonatomic) Q reservedRangeArray_Count;
@property (nonatomic) NSMutableArray reservedNameArray;
@property (nonatomic) Q reservedNameArray_Count;
+ (id)descriptor;
@end
