@interface TRIPBSourceCodeInfo_Location : TRIPBMessage
@property (nonatomic) TRIPBInt32Array pathArray;
@property (nonatomic) Q pathArray_Count;
@property (nonatomic) TRIPBInt32Array spanArray;
@property (nonatomic) Q spanArray_Count;
@property (nonatomic) NSString leadingComments;
@property (nonatomic) BOOL hasLeadingComments;
@property (nonatomic) NSString trailingComments;
@property (nonatomic) BOOL hasTrailingComments;
@property (nonatomic) NSMutableArray leadingDetachedCommentsArray;
@property (nonatomic) Q leadingDetachedCommentsArray_Count;
+ (id)descriptor;
@end
