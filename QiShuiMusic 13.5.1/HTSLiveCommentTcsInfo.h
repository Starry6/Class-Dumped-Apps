@interface HTSLiveCommentTcsInfo : IESLivePBBaseMessage
@property (nonatomic) q commentTcsType;
@property (nonatomic) q commentTcsProject;
@property (nonatomic) GPBInt64Array banAntidirtTablesArray;
@property (nonatomic) Q banAntidirtTablesArray_Count;
@property (nonatomic) GPBInt64Array selfVisibleAntidirtTablesArray;
@property (nonatomic) Q selfVisibleAntidirtTablesArray_Count;
+ (id)descriptor;
@end
