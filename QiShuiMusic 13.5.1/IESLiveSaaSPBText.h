@interface IESLiveSaaSPBText : GPBMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSString defaultPattern;
@property (nonatomic) IESLiveSaaSPBTextFormat defaultFormat;
@property (nonatomic) BOOL hasDefaultFormat;
@property (nonatomic) NSMutableArray piecesArray;
@property (nonatomic) Q piecesArray_Count;
@property (nonatomic) NSMutableDictionary schemaInfos;
@property (nonatomic) Q schemaInfos_Count;
+ (id)descriptor;
@end
