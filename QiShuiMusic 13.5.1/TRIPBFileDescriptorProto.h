@interface TRIPBFileDescriptorProto : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString package;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) NSMutableArray dependencyArray;
@property (nonatomic) Q dependencyArray_Count;
@property (nonatomic) TRIPBInt32Array publicDependencyArray;
@property (nonatomic) Q publicDependencyArray_Count;
@property (nonatomic) TRIPBInt32Array weakDependencyArray;
@property (nonatomic) Q weakDependencyArray_Count;
@property (nonatomic) NSMutableArray messageTypeArray;
@property (nonatomic) Q messageTypeArray_Count;
@property (nonatomic) NSMutableArray enumTypeArray;
@property (nonatomic) Q enumTypeArray_Count;
@property (nonatomic) NSMutableArray serviceArray;
@property (nonatomic) Q serviceArray_Count;
@property (nonatomic) NSMutableArray extensionArray;
@property (nonatomic) Q extensionArray_Count;
@property (nonatomic) TRIPBFileOptions options;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) TRIPBSourceCodeInfo sourceCodeInfo;
@property (nonatomic) BOOL hasSourceCodeInfo;
@property (nonatomic) NSString syntax;
@property (nonatomic) BOOL hasSyntax;
+ (id)descriptor;
@end
