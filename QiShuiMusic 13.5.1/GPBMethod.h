@interface GPBMethod : GPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString requestTypeURL;
@property (nonatomic) BOOL requestStreaming;
@property (nonatomic) NSString responseTypeURL;
@property (nonatomic) BOOL responseStreaming;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) NSInteger syntax;
+ (id)descriptor;
@end
