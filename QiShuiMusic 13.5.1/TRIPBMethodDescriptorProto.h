@interface TRIPBMethodDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString inputType;
@property (nonatomic) BOOL hasInputType;
@property (nonatomic) NSString outputType;
@property (nonatomic) BOOL hasOutputType;
@property (nonatomic) TRIPBMethodOptions options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL clientStreaming;
@property (nonatomic) BOOL hasClientStreaming;
@property (nonatomic) BOOL serverStreaming;
@property (nonatomic) BOOL hasServerStreaming;
+ (id)descriptor;
@end
