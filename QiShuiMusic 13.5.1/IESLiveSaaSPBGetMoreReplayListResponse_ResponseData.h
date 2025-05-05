@interface IESLiveSaaSPBGetMoreReplayListResponse_ResponseData : GPBMessage
@property (nonatomic) NSString typeName;
@property (nonatomic) NSMutableArray infoListArray;
@property (nonatomic) Q infoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) IESLiveSaaSPBReplayListExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
