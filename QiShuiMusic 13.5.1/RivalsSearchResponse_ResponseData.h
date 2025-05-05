@interface RivalsSearchResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray anchorInfoListArray;
@property (nonatomic) Q anchorInfoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString searchId;
@property (nonatomic) ActivityPKConf dynamicConf;
@property (nonatomic) BOOL hasDynamicConf;
+ (id)descriptor;
@end
