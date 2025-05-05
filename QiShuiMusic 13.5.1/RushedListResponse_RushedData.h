@interface RushedListResponse_RushedData : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString nickName;
@property (nonatomic) q multiple;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) NSInteger expandType;
@property (nonatomic) HTSLiveImage labelImage;
@property (nonatomic) BOOL hasLabelImage;
+ (id)descriptor;
@end
