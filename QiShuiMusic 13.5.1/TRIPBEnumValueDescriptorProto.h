@interface TRIPBEnumValueDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger number;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) TRIPBEnumValueOptions options;
@property (nonatomic) BOOL hasOptions;
+ (id)descriptor;
@end
