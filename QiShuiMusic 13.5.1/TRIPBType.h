@interface TRIPBType : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray fieldsArray;
@property (nonatomic) Q fieldsArray_Count;
@property (nonatomic) NSMutableArray oneofsArray;
@property (nonatomic) Q oneofsArray_Count;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) TRIPBSourceContext sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) NSInteger syntax;
+ (id)descriptor;
@end
