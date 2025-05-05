@interface IESLiveSaaSPBRushedListResponse_ResponseData : GPBMessage
@property (nonatomic) BOOL succeed;
@property (nonatomic) BOOL expired;
@property (nonatomic) q diamondCount;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) IESLiveSaaSPBImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
@property (nonatomic) NSMutableArray rushedListArray;
@property (nonatomic) Q rushedListArray_Count;
+ (id)descriptor;
@end
