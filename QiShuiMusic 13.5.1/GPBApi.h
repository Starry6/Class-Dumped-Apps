@interface GPBApi : GPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray methodsArray;
@property (nonatomic) Q methodsArray_Count;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) NSString version;
@property (nonatomic) GPBSourceContext sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) NSMutableArray mixinsArray;
@property (nonatomic) Q mixinsArray_Count;
@property (nonatomic) NSInteger syntax;
+ (id)descriptor;
@end
