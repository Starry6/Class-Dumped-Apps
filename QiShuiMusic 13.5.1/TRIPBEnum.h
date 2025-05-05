@interface TRIPBEnum : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray enumvalueArray;
@property (nonatomic) Q enumvalueArray_Count;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) TRIPBSourceContext sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) NSInteger syntax;
+ (id)descriptor;
@end
