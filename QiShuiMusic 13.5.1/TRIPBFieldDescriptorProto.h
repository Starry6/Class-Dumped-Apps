@interface TRIPBFieldDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger number;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) NSInteger label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString typeName;
@property (nonatomic) BOOL hasTypeName;
@property (nonatomic) NSString extendee;
@property (nonatomic) BOOL hasExtendee;
@property (nonatomic) NSString defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) NSInteger oneofIndex;
@property (nonatomic) BOOL hasOneofIndex;
@property (nonatomic) NSString jsonName;
@property (nonatomic) BOOL hasJsonName;
@property (nonatomic) TRIPBFieldOptions options;
@property (nonatomic) BOOL hasOptions;
+ (id)descriptor;
@end
