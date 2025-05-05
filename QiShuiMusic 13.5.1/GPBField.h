@interface GPBField : GPBMessage
@property (nonatomic) NSInteger kind;
@property (nonatomic) NSInteger cardinality;
@property (nonatomic) NSInteger number;
@property (nonatomic) NSString name;
@property (nonatomic) NSString typeURL;
@property (nonatomic) NSInteger oneofIndex;
@property (nonatomic) BOOL packed;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) NSString jsonName;
@property (nonatomic) NSString defaultValue;
+ (id)descriptor;
@end
