@interface TRIPBServiceDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSMutableArray methodArray;
@property (nonatomic) Q methodArray_Count;
@property (nonatomic) TRIPBServiceOptions options;
@property (nonatomic) BOOL hasOptions;
+ (id)descriptor;
@end
