@interface TRIPBValue : TRIPBMessage
@property (nonatomic) NSInteger kindOneOfCase;
@property (nonatomic) NSInteger nullValue;
@property (nonatomic) double numberValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) TRIPBStruct structValue;
@property (nonatomic) TRIPBListValue listValue;
+ (id)descriptor;
@end
