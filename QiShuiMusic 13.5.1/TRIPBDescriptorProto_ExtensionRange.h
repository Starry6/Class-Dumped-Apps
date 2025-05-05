@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage
@property (nonatomic) NSInteger start;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) NSInteger end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) TRIPBExtensionRangeOptions options;
@property (nonatomic) BOOL hasOptions;
+ (id)descriptor;
@end
