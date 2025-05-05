@interface Banner : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray bannersArray;
@property (nonatomic) Q bannersArray_Count;
@property (nonatomic) q total;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSString title;
@property (nonatomic) q switchType;
@property (nonatomic) q bannersType;
@property (nonatomic) HTSLiveBannerData h5Banner;
@property (nonatomic) BOOL hasH5Banner;
+ (id)descriptor;
@end
