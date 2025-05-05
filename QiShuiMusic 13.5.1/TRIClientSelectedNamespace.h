@interface TRIClientSelectedNamespace : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) TRIPBUInt32Array compatibilityVersionArray;
@property (nonatomic) Q compatibilityVersionArray_Count;
+ (id)descriptor;
@end
