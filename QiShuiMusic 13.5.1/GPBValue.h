@interface GPBValue : GPBMessage
@property (nonatomic) NSInteger kindOneOfCase;
@property (nonatomic) NSInteger nullValue;
@property (nonatomic) double numberValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) GPBStruct structValue;
@property (nonatomic) GPBListValue listValue;
+ (id)descriptor;
@end
