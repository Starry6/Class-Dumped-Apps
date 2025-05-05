@interface TRIPBOneofDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) TRIPBOneofOptions options;
@property (nonatomic) BOOL hasOptions;
+ (id)descriptor;
@end
